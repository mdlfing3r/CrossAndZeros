#ifndef STYLE_RESOURCES_H
#define STYLE_RESOURCES_H

#include <QString>



class style_resources
{
public:
    style_resources();

    static QString GetStyle_playButton()
    {
        return "QPushButton{"
               "color:#fff;"
               "background: none;"
               "border:none;"
               "border-radius: 19px;"
               "background-color: qlineargradient(spread:pad, x1:0.014, y1:0, x2:0, y2:1, stop:1 rgba(0, 170, 255, 255));"
               "font-family: 'Roboto Medium';"
               "font-size: 16px;"
               "}"

               "QPushButton::hover {"
               "background-color: qlineargradient(spread:pad, x1:0.014, y1:0, x2:0, y2:1, stop:0.052381 rgba(0, 170, 255, 255), stop:0.971429 rgba(104, 63, 179, 255));"
               "}"

               "QPushButton::pressed{"
               "background-color: qlineargradient(spread:pad, x1:0.014, y1:0, x2:0, y2:1, stop:1 rgba(0, 170, 255, 255));"
               "}";

    }
    static QString GetStyle_aboutButton()
    {
        return "QPushButton{"
               "color:#fff;"
               "background: none;"
               "border:none;"
               "border-radius: 19px;"
               "background-color: qlineargradient(spread:pad, x1:0.014, y1:0, x2:0, y2:1, stop:1 rgba(0, 170, 255, 255));"
               "font-family: 'Roboto Medium';"
               "font-size: 16px;"
               "}"

               "QPushButton::hover {"
               "background-color: qlineargradient(spread:pad, x1:0.014, y1:0, x2:0, y2:1, stop:0.052381 rgba(0, 170, 255, 255), stop:0.971429 rgba(104, 63, 179, 255));"
               "}"

               "QPushButton::pressed{"
               "background-color: qlineargradient(spread:pad, x1:0.014, y1:0, x2:0, y2:1, stop:1 rgba(0, 170, 255, 255));"
               "}";

    }

    static QString GetStyle_MainWidget()
{
    return "QWidget{background-image: url(:/resources/images/bg.png);}";
}

    static QString GetStyle_SideSwitcher_left()
    {

        return "QPushButton{"
               "color:#fff;"
               "background: none;"
               "border:none;"
               "border-top-left-radius: 5px;"
               "border-bottom-left-radius: 5px;"
               "background-color: #525f6b;"
               "background-image: url(:/resources/images/cross_small.png);"
               "background-repeat:no-repeat;"
               "border: 1px solid #333;"
               "background-position: center center;}"

               "QPushButton::hover{background: #5c6a77; background-image: url(:/resources/images/cross_small.png);"
               "background-repeat:no-repeat;"
               "background-position: center center;}";

    }

    static QString GetStyle_SideSwitcher_left_isActive()
    {

        return "QPushButton{"
               "color:#fff;"
               "background: none;"
               "border:none;"
               "border-top-left-radius: 5px;"
               "border-bottom-left-radius: 5px;"
               "background-color: #222936;"
               "background-image: url(:/resources/images/cross_small.png);"
               "background-repeat:no-repeat;"
               "border: 1px solid #333;"
               "background-position: center center;}"

                "QPushButton::hover{background: #2b3342; background-image: url(:/resources/images/cross_small.png);"
                "background-repeat:no-repeat;"
                "background-position: center center;}";
    }

    static QString GetStyle_SideSwitcher_right()
    {

        return "QPushButton{"
               "color:#fff;"
               "background: none;"
               "border:none;"
               "border-top-right-radius: 5px;"
               "border-bottom-right-radius: 5px;"
               "background-color: #525f6b;"
               "background-image: url(:/resources/images/zero_small.png);"
               "background-repeat:no-repeat;"
               "border: 1px solid #333;"
               "border-left: none;"
               "background-position: center center;}"

               "QPushButton::hover{background: #5c6a77; background-image: url(:/resources/images/zero_small.png);"
               "background-repeat:no-repeat;"
               "background-position: center center;}";
    }

    static QString GetStyle_SideSwitcher_right_isActive()
    {

        return "QPushButton{"
               "color:#fff;"
               "background: none;"
               "border:none;"
               "border-top-right-radius: 5px;"
               "border-bottom-right-radius: 5px;"
               "background-color: #222936;"
               "background-image: url(:/resources/images/zero_small.png);"
               "background-repeat:no-repeat;"
               "border: 1px solid #333;"
               "border-left: none;"
               "background-position: center center;}"

               "QPushButton::hover{background: #2b3342; background-image: url(:/resources/images/zero_small.png);"
               "background-repeat:no-repeat;"
               "background-position: center center;}";
    }

    static QString GetStyle_TabWidget()
    {
        return "QTabWidget"
               "{"
               "border:1px solid #222;"
               "border-radius: 3px;"
               "}"
               "QTabWidget::pane"
               "{"
               "border:1px solid #222;"
               "border-radius: 3px;"
               "}";


    }

    static QString GetStyle_TabWidget_tab()
    {
       return  "QWidget#tab"
               "{"
               "background:none;"
               "background-color: #1b232e;"
               "}";
    }

    static QString GetStyle_TabWidget_tab2()
    {
       return  "QWidget#tab_2"
               "{"
               "background: #d1d9e0#d1d9e0;"
               "}"

               "QWidget#about_game_text"
               "{"
               "background: #d1d9e0#d1d9e0;"
               "}";
    }

    static QString GetStyle_TabWidget_tab3()
    {
       return  "QWidget#tab_3"
               "{"
               "background: #d1d9e0#d1d9e0;"
               "}"

               "QWidget#Thx_4_choosing"
               "{"
               "background: #d1d9e0#d1d9e0;"
               "}";
    }

    static QString GetStyle_GameState_info()
    {
        return

                       "background: #ff34ae;"

                ;

    }


    static QString GetStyle_Button(char state, char *side )// r - regular state, w - win state, l - loose state
    {
        QString ans;
        //side = '0';

        switch(*side)
        {
            case '0':
                    switch(state)
                    {

                        case 'r': ans = GetStyle_Zeroes_Button_regular();  //O - regular state of O
                                  break;

                        case 'w': ans = GetStyle_Zeroes_Button_isWinner(); //O - Win state of O
                                  break;

                        case 'l': ans = GetStyle_Zeroes_Button_isLooser();  //o - Loose state of O
                                  break;

                    }
                    break;

            case 'x':
                    switch(state)
                    {
                        case 'r': ans = GetStyle_Zeroes_Button_regular(); //o - Loose state of x
                                  break;

                        case 'w': ans =  GetStyle_Crossed_Button_isWinner(); //O - Win state of X
                                  break;

                        case 'l': ans = GetStyle_Crossed_Button_isLooser(); //o - Loose state of x
                                  break;
                    }
                    break;


        }
        return ans;
    }


    static QString GetStyle_Blank_Button()
    {
        return  "QPushButton"
                "{"
                "background: none;"
                "background-color: rgb(34, 41, 54);"
                "border-radius:4px;"
                "}"

                "QPushButton::hover{background-color: rgb(44, 51, 64);}";

    }

    static QString GetStyle_Crossed_Button_regular()
    {
        return  "QPushButton"
                "{"
                "background-color: rgb(34, 41, 54);"
                "border-radius:4px;"
                "background-image: url(:/resources/images/cross_large.png) no-repeat center center;"
                "}"

                "QPushButton::hover{background-color: rgb(44, 51, 64);}";
    }

    static QString GetStyle_Zeroes_Button_regular()
    {
        return  "QPushButton"
                "{"
                "background-color: rgb(34, 41, 54);"
                "border-radius:4px;"
                "background-image: url(:/resources/images/zero_large.png) no-repeat center center;"
                "}"

                "QPushButton::hover{background-color: rgb(44, 51, 64);}";
    }

    static QString GetStyle_Crossed_Button_isWinner()
    {
        return  "QPushButton"
                "{"
                "background-color: #1e4919;"
                "border-radius:4px;"
                "background-image: url(:/resources/images/cross_large.png) no-repeat center center;"
                "}"

                "QPushButton::hover{background-color: rgb(44, 51, 64);}";
    }

    static QString GetStyle_Zeroes_Button_isWinner()
    {
        return  "QPushButton"
                "{"
                "background-color: #1e4919;"
                "border-radius:4px;"
                "background-image: url(:/resources/images/zero_large.png) no-repeat center center;"
                "}"

                "QPushButton::hover{background-color: rgb(44, 51, 64);}";
    }

    static QString GetStyle_Crossed_Button_isLooser()
    {
        return  "QPushButton"
                "{"
                "background-color: #97199a;"
                "border-radius:4px;"
                "background-image: url(:/resources/images/cross_large.png) no-repeat center center;"
                "}"

                "QPushButton::hover{background-color: rgb(44, 51, 64);}";
    }

    static QString GetStyle_Zeroes_Button_isLooser()
    {
        return  "QPushButton"
                "{"
                "background-color: #97199a;"
                "border-radius:4px;"
                "background-image: url(:/resources/images/zero_large.png) no-repeat center center;"
                "}"

                "QPushButton::hover{background-color: rgb(44, 51, 64);}";
    }


    static QString GetNormal_Message()
    {
        return "QLabel{font-family: 'Roboto Medium'; font-size:16px;background:none; color:#ffffff;}";
    }

    static QString GetVictory_Message()
    {
        return "QLabel{font-family: 'Roboto Medium'; font-size:16px; background:#006000; color:#ffffff;}";
    }

    static QString GetLoose_Mesage()
    {
        return "QLabel{font-family: 'Roboto Medium'; font-size:16px; background:#97199a; color:#ffffff;}";
    }


};

#endif // STYLE_RESOURCES_H
