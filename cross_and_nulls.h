#ifndef CROSS_AND_NULLS_H
#define CROSS_AND_NULLS_H

#include <QMainWindow>
#include <QPainter>  //Для красивости заднего фона (можно не добавлять)

QT_BEGIN_NAMESPACE
namespace Ui { class Cross_and_nulls; }
QT_END_NAMESPACE

class Cross_and_nulls : public QMainWindow
{
    Q_OBJECT

public:
    Cross_and_nulls(QWidget *parent = nullptr);
    ~Cross_and_nulls();

private slots:

    void on_Button_play_clicked();
    void on_Button_about_clicked();


    void on_Button_selectSide_Right_clicked(bool checked);
    void on_Button_selectSide_Left_clicked(bool checked);


private:
    Ui::Cross_and_nulls *ui;
    void setInterfaceStyle();

    bool sideChecker(bool);

    void addFonts();

    int field_set(int field[3][3]);

    bool changed_side;
};
#endif // CROSS_AND_NULLS_H
