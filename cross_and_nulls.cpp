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
    Get_Info_Button_Clicked();
    win_statement(getProgress());


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


    Cross_and_nulls::AreaCleaning();
    Cross_and_nulls::sideChecker(Cross_and_nulls::getCurrent_player_side());

    ui->Area_info->setText("Area status");


}




void Cross_and_nulls::win_statement(int prog)
{
    int value = 5;

    while(QString::number(Cross_and_nulls::getProgress()) > QString::number(value))
    {
         ui->Label_result->setText("WINNER");
         break;
    }
}

void Cross_and_nulls::setGameArea(int row, int column, char current_side)
{
    QString str;
    str =  "clicked area is [" + QString::number(row) + "][" + QString::number(column) + "] Step number:" + QString::number(Cross_and_nulls::getProgress());
    //GameArea[row][column] = current_side + QString::number;
    ui->Area_info->setText(str);
}

int Cross_and_nulls::getProgress()
{
    return progress;
}
void Cross_and_nulls::setProgress(int newProgress)
{
    progress = newProgress;
}

void Cross_and_nulls::setCurrent_player_side(char newCurrent_player_side)
{
    current_player_side = newCurrent_player_side;
}
char Cross_and_nulls::getCurrent_player_side() const
{
    return current_player_side;
}
void Cross_and_nulls::sideChecker(char side)
{

    switch(side)
    {
    case 'x':
             ui->Button_selectSide_Left->setStyleSheet(style_resources :: GetStyle_SideSwitcher_left_isActive());
             ui->Button_selectSide_Right->setStyleSheet(style_resources :: GetStyle_SideSwitcher_right());
             //Cross_and_nulls::setCurrent_player_side(side);
             break;

    case '0':
             ui->Button_selectSide_Left->setStyleSheet(style_resources :: GetStyle_SideSwitcher_left());
             ui->Button_selectSide_Right->setStyleSheet(style_resources :: GetStyle_SideSwitcher_right_isActive());
             //side = '0';
             break;

    default:
             break;
    }
}
void Cross_and_nulls::ChangeSide(char set_side)
{
    if (set_side == 'x')
    {
        current_player_side = '0';
        Cross_and_nulls::sideChecker('0');
    }else{
             current_player_side = 'x';
             Cross_and_nulls::sideChecker('x');
         }
}


void Cross_and_nulls::on_Button_selectSide_Right_clicked(bool checked)
{
    Cross_and_nulls::setCurrent_player_side('0');
    Cross_and_nulls::sideChecker('0');
}
void Cross_and_nulls::on_Button_selectSide_Left_clicked(bool checked)
{
    Cross_and_nulls::setCurrent_player_side('x');
    Cross_and_nulls::sideChecker('x');
}


void Cross_and_nulls::on_Button_play_clicked()
{
     if((Cross_and_nulls::getCurrent_player_side() == '0') || (Cross_and_nulls::getCurrent_player_side() == 'x'))
     {
         ui->tabWidget->setCurrentIndex(0);
         ui->Button_selectSide_Left->setDisabled(1);
         ui->Button_selectSide_Right->setDisabled(1);
         ui->Button_about->setDisabled(1);
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
    ui->gridLayout->itemAtPosition(row,column)->widget()->setStyleSheet(style_resources::GetStyle_Button(style, Cross_and_nulls::getCurrent_player_side()));
}


void Cross_and_nulls::Get_Info_Button_Clicked()
{
    for(int column = 0; column < 3; column++)
    {
        for(int row = 0; row < 3; row++)
        {
            QPushButton *btn = qobject_cast<QPushButton*>(ui->gridLayout->itemAtPosition(row,column)->widget());
            btn -> setProperty("row", row);
            btn -> setProperty("column", column);
            btn -> setProperty("side", column);
            connect(btn, SIGNAL(clicked()), this, SLOT(onGameAreaButtonClicked()));
        }
    }

}

void Cross_and_nulls::onGameAreaButtonClicked()
{

    QPushButton *btn = qobject_cast<QPushButton*>(sender()); //sener() - функция для получения указателя на вызвавший функцию объект

    if(GameArea[btn->property("row").toInt()][btn->property("column").toInt()] == '-')
    {
    Cross_and_nulls::SetGameButtonStyle(btn->property("row").toInt(), btn->property("column").toInt(), 'r');
    Cross_and_nulls::setGameArea(btn->property("row").toInt(), btn->property("column").toInt(),getCurrent_player_side());
    Cross_and_nulls::ChangeSide(Cross_and_nulls::getCurrent_player_side());

    GameArea[btn->property("row").toInt()][btn->property("column").toInt()] = getCurrent_player_side();
    Cross_and_nulls::setProgress((Cross_and_nulls::getProgress()+1));

    }
    else
    {
        Cross_and_nulls::setGameArea(btn->property("row").toInt(), btn->property("column").toInt(),getCurrent_player_side());
    }

}

void Cross_and_nulls::AreaCleaning()
{
    for(int column = 0; column < 3; column++)
    {
        for(int row = 0; row < 3; row++)
        {
            if(GameArea[column][row] == '-')
                ui->gridLayout->itemAtPosition(row,column)->widget()->setStyleSheet(style_resources::GetStyle_Blank_Button());
        }
    }
}


void Cross_and_nulls::on_GameButton_0_0_clicked()
{
}






