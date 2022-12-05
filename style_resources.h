#ifndef STYLE_RESOURCES_H
#define STYLE_RESOURCES_H

#include <QString>



class style_resources
{
public:
    style_resources();
    static QString setButtonStyle()
    {
        return "QPushButton{color:rgb(0, 255, 0);}";
    }

    static QString GetMainWidgetStyle()
{
    return "QWidget{background-image: url(:/resources/images/bg.png);}";
}

};

#endif // STYLE_RESOURCES_H
