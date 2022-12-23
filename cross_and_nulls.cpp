#include "cross_and_nulls.h"
#include "./ui_cross_and_nulls.h"
#include <QTabBar>
#include "style_resources.cpp"
#include <QFontDatabase>


Cross_and_nulls::Cross_and_nulls(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cross_and_nulls)
{
    ui->setupUi(this);
    addFonts();
    setInterfaceStyle();
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


/*int Cross_and_nulls::field_setPosition(int field[3][3] )
{

    int Total[3][3] = {{0, 0, 0},
                       {0, 0, 0},
                       {0, 0, 0}
                      };
    //int tot[3][3] = field[3][3];

 return 0;
}
*/

void Cross_and_nulls::setInterfaceStyle()
{
    this->setStyleSheet(style_resources ::GetStyle_MainWidget());

    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setMaximumHeight(320);
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setStyleSheet(style_resources::GetStyle_TabWidget());
    ui->tab->setStyleSheet(style_resources::GetStyle_TabWidget_tab());
    ui->tab_2->setStyleSheet(style_resources::GetStyle_TabWidget_tab2());

    ui->Button_about->setStyleSheet(style_resources :: GetStyle_aboutButton() );
    ui->Button_play->setStyleSheet(style_resources :: GetStyle_playButton() );
    ui->Button_selectSide_Left->setStyleSheet(style_resources :: GetStyle_SideSwitcher_left() );
    ui->Button_selectSide_Right->setStyleSheet(style_resources :: GetStyle_SideSwitcher_right() );



    //Cross_and_nulls::SetGameButtonStyle(1, 0, 'x');
    //Cross_and_nulls::SetGameButtonStyle(0, 1, 'X');
    //Cross_and_nulls::SetGameButtonStyle(0, 2, 'o');
    //Cross_and_nulls::SetGameButtonStyle(1, 2, '0');
    ui->Label_result->setStyleSheet(style_resources::GetNormal_Message());
    ui->Label_result->setText("ЮРА ГЕЙ");

    Cross_and_nulls::Get_Game_Button_Clicked();

}


bool Cross_and_nulls::sideChecker(bool side){

    switch(int(side))
    {
    case 0:
             ui->Button_selectSide_Left->setStyleSheet(style_resources :: GetStyle_SideSwitcher_left_isActive());
             ui->Button_selectSide_Right->setStyleSheet(style_resources :: GetStyle_SideSwitcher_right());
             break;

    case 1:
             ui->Button_selectSide_Left->setStyleSheet(style_resources :: GetStyle_SideSwitcher_left());
             ui->Button_selectSide_Right->setStyleSheet(style_resources :: GetStyle_SideSwitcher_right_isActive());
             break;

    }
    return changed_side = side;
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
     ui->tabWidget->setCurrentIndex(0);
}
void Cross_and_nulls::on_Button_about_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}



void Cross_and_nulls::SetGameButtonStyle(int row, int column, char style)
{
    ui->gridLayout->itemAtPosition(row,column)->widget()->setStyleSheet(style_resources::GetStyle_Button(style));
}

void Cross_and_nulls::Get_Game_Button_Clicked()
{
    for(int column = 0; column < 3; column++)
    {
        for(int row = 0; row < 3; row++)
        {
            QPushButton *btn = qobject_cast<QPushButton*>(ui->gridLayout->itemAtPosition(row,column)->widget());
            btn -> setProperty("row", row);
            btn -> setProperty("column", column);
            //btn->setStyleSheet(style_resources::GetStyle_Button('o'));
            //connect(sender, SIGNAL, ); ПОЧИТАТЬ ЗА ПОДКЛЮЧЕНИЕ СИГНАЛОВ И СЛОТОВ

        }
    }

}



void Cross_and_nulls::on_GameButton_0_0_clicked()
{
    //Cross_and_nulls::SetGameButtonStyle(2, 2, 'O');
    Cross_and_nulls::SetGameButtonStyle(0, 0, 'x');
   // Cross_and_nulls::SetGameButtonStyle(1, 1, 'k');
    //Cross_and_nulls::SetGameButtonStyle(2, 2, 'e');
}

void Cross_and_nulls::onGameAreaButtonClicked()
{

}

