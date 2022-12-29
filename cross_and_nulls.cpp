#include "cross_and_nulls.h"
#include "./ui_cross_and_nulls.h"
#include <QTabBar>
#include "style_resources.cpp"
#include <QFontDatabase>


Cross_and_nulls::Cross_and_nulls(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cross_and_nulls)
{
   // QApplication::setAttribute(Qt::AA_Use48Dpi);
    ui->setupUi(this);
    addFonts();
    setInterfaceStyle();
    Get_Game_Button_Clicked();
    Cross_and_nulls::AreaCleaning();
   // connect(this, SIGNAL(on_GameButton_0_0_clicked()), this, SLOT(on_Button_about_clicked()));

}



Cross_and_nulls::~Cross_and_nulls()
{
    delete ui;
}

void Cross_and_nulls::addFonts()
{
    QFontDatabase::addApplicationFont(":/resources/fonts/Roboto-Medium.ttf");
    QFontDatabase::addApplicationFont(":/resources/fonts/Roboto-MediumItalic.ttf");

}


void Cross_and_nulls::setInterfaceStyle()
{
    this->setStyleSheet(style_resources ::GetStyle_MainWidget());

    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setMaximumHeight(320);
    ui->tabWidget->setCurrentIndex(2);
    ui->tabWidget->setStyleSheet(style_resources::GetStyle_TabWidget());
    ui->tab->setStyleSheet(style_resources::GetStyle_TabWidget_tab());
    ui->tab_2->setStyleSheet(style_resources::GetStyle_TabWidget_tab2());
    ui->tab_3->setStyleSheet(style_resources::GetStyle_TabWidget_tab3());

    ui->Button_about->setStyleSheet(style_resources :: GetStyle_aboutButton() );
    ui->Button_play->setStyleSheet(style_resources :: GetStyle_playButton() );
    ui->Button_selectSide_Left->setStyleSheet(style_resources :: GetStyle_SideSwitcher_left() );
    ui->Button_selectSide_Right->setStyleSheet(style_resources :: GetStyle_SideSwitcher_right() );


    ui->Label_result->setStyleSheet(style_resources::GetNormal_Message());
    ui->Label_result->setText("Wellcome, dude");

    Cross_and_nulls::Get_Game_Button_Clicked();

}


bool Cross_and_nulls::sideChecker(bool side){

    switch(int(side))
    {
    case 0:
             ui->Button_selectSide_Left->setStyleSheet(style_resources :: GetStyle_SideSwitcher_left_isActive());
             ui->Button_selectSide_Right->setStyleSheet(style_resources :: GetStyle_SideSwitcher_right());
             current_player_side = 'x';
             break;

    case 1:
             ui->Button_selectSide_Left->setStyleSheet(style_resources :: GetStyle_SideSwitcher_left());
             ui->Button_selectSide_Right->setStyleSheet(style_resources :: GetStyle_SideSwitcher_right_isActive());
             current_player_side = '0';
             break;

    }
    return current_player_side;
}
void Cross_and_nulls::on_Button_selectSide_Right_clicked(bool checked)
{
    sideChecker(1);
}
void Cross_and_nulls::on_Button_selectSide_Left_clicked(bool checked)
{
    sideChecker(0);

}

//void Cross_and_nulls::onGameAreaButtonClicked()
//{

//}


void Cross_and_nulls::on_Button_play_clicked()
{
     if((current_player_side == '0') || (current_player_side == 'x'))
     {
         ui->tabWidget->setCurrentIndex(0);
         ui->Button_selectSide_Left->setDisabled(1);
         ui->Button_selectSide_Right->setDisabled(1);
         ui->Button_about->setDisabled(1);
         ui->Label_result->setStyleSheet("");
         ui->Label_result->setText("Battle begin");


         //ui->tabWidget->setCurrentIndex(0);
     }
     else
        {
         ui->Label_result->setStyleSheet(style_resources::GetStyle_GameState_info());
         ui->Label_result->setText("ДЛЯ НАЧАЛА ВЫБЕРИ СТОРОНУ");

        }

}
void Cross_and_nulls::on_Button_about_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}



void Cross_and_nulls::SetGameButtonStyle(int row, int column, char style)
{
    ui->gridLayout->itemAtPosition(row,column)->widget()->setStyleSheet(style_resources::GetStyle_Button(style, &current_player_side));
}

//void Cross_and_nulls::SelectGameButtonStyle(int row, int column, bool side)
//{

//}

void Cross_and_nulls::Get_Game_Button_Clicked()
{
    for(int column = 0; column < 3; column++)
    {
        for(int row = 0; row < 3; row++)
        {
            GameArea[row][column] = '0';
            QPushButton *btn = qobject_cast<QPushButton*>(ui->gridLayout->itemAtPosition(row,column)->widget());
            btn -> setProperty("row", row);
            btn -> setProperty("column", column);
            btn -> setProperty("side", column);
            connect(btn, SIGNAL(clicked()), this, SLOT(onGameAreaButtonClicked()));


        }
    }

}



void Cross_and_nulls::on_GameButton_0_0_clicked()
{

    //Cross_and_nulls::SetGameButtonStyle(0, 0, 'x');

}


void Cross_and_nulls::onGameAreaButtonClicked()
{
    QPushButton *btn = qobject_cast<QPushButton*>(sender()); //sener() - функция для получения указателя на вызвавший функцию объект
    //int row = (btn -> property("row").toInt());
    //int column = (btn -> property("column").toInt());
    //qDebug() << row << ":" << column;
    //btn->property("row");
    Cross_and_nulls::SetGameButtonStyle(btn->property("row").toInt(), btn->property("column").toInt(), 'w');
}

void Cross_and_nulls::AreaCleaning()
{
    for(int column = 0; column < 3; column++)
    {
        for(int row = 0; row < 3; row++)
            //if(Cross_and_nulls :: GameArea[row][column] == 0)
             //   {
                ui->gridLayout->itemAtPosition(row,column)->widget()->setStyleSheet(style_resources::GetStyle_Blank_Button());
              //  }

    }
}



