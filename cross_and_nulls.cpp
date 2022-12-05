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

int Cross_and_nulls::field_setPosition(int field[3][3] )
{

    int Total[3][3] = {{0, 0, 0},
                       {0, 0, 0},
                       {0, 0, 0}
                      };
    //int tot[3][3] = field[3][3];

 return 0;
}

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


/*
    ui->GameButton_1_1->setStyleSheet(style_resources::GetStyle_Blank_Button());
    ui->GameButton_1_2->setStyleSheet(style_resources::GetStyle_Crossed_Button_isLooser());
    ui->GameButton_1_3->setStyleSheet(style_resources::GetStyle_Zeroes_Button_isWinner());

    ui->GameButton_2_1->setStyleSheet(style_resources::GetStyle_Crossed_Button_isLooser());
    ui->GameButton_2_2->setStyleSheet(style_resources::GetStyle_Zeroes_Button_isWinner());
    ui->GameButton_2_3->setStyleSheet(style_resources::GetStyle_Crossed_Button_isLooser());

    ui->GameButton_3_1->setStyleSheet(style_resources::GetStyle_Zeroes_Button_isWinner());
    ui->GameButton_3_2->setStyleSheet(style_resources::GetStyle_Crossed_Button_isLooser());
    ui->GameButton_3_3->setStyleSheet(style_resources::GetStyle_Zeroes_Button_regular());
*/

    ui->Label_result->setStyleSheet(style_resources::GetNormal_Message());
    ui->Label_result->setText("Ходят они");

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


void Cross_and_nulls::on_Button_play_clicked()
{
     ui->tabWidget->setCurrentIndex(0);
}
void Cross_and_nulls::on_Button_about_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}


class ButtonHandler
{
public:
        ButtonHandler()
        {
            bool side;

        }

};

/*
case 0:   //field 1_1

          break;

case 1:
          break;

case 2:
          break;

case 3:
          break;

case 4:
          break;

case 5:
          break;

case 6:
          break;

case 7:
          break;

case 8:
          break;

case 9:
          break;

case 10:
          break;

case 11:
          break;

case 12:
          break;

case 13:
          break;

case 14:
          break;

case 15:
          break;

case 16:
          break;

case 17:
          break;

case 18:
          break;

case 19:
          break;

*/

void Cross_and_nulls::on_GameButton_1_1_clicked()
{
    ButtonHandler button_1_1;
}




