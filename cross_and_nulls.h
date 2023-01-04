#ifndef CROSS_AND_NULLS_H
#define CROSS_AND_NULLS_H

#include <QMainWindow>
#include <QPainter>  //Для красивости заднего фона (можно не добавлять)
#include <QButtonGroup>



QT_BEGIN_NAMESPACE
namespace Ui { class Cross_and_nulls; }
QT_END_NAMESPACE

class Cross_and_nulls : public QMainWindow
{
    Q_OBJECT

public:
    Cross_and_nulls(QWidget *parent = nullptr);
    ~Cross_and_nulls();

    char getCurrent_player_side() const;

    void setCurrent_player_side(char newCurrent_player_side);

    char current_player_side;

    char GameArea[3][3] = {{'-', '-', '-'},
                         {'-', '-', '-'},
                         {'-', '-', '-'}
                      };
    void win_statement(int);

    void setGameArea(int, int, char);

    int progress = 0;

    void setProgress(int newProgress);

    int getProgress();

private slots:

    void on_Button_play_clicked();
    void on_Button_about_clicked();


    void on_Button_selectSide_Right_clicked(bool checked);
    void on_Button_selectSide_Left_clicked(bool checked);


    void on_GameButton_0_0_clicked();
    void onGameAreaButtonClicked();
    void AreaCleaning();

    void ChangeSide(char set_side);

private:
    Ui::Cross_and_nulls *ui;

    void setInterfaceStyle();

    void sideChecker(char);

    void addFonts();

    void SetGameButtonStyle(int row, int column, char style);

    void Get_Info_Button_Clicked();




};
#endif // CROSS_AND_NULLS_H
