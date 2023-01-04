/********************************************************************************
** Form generated from reading UI file 'cross_and_nulls.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CROSS_AND_NULLS_H
#define UI_CROSS_AND_NULLS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cross_and_nulls
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *Area_info;
    QLabel *Game_label;
    QLabel *Label_result;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_selectSide_Left;
    QPushButton *Button_selectSide_Right;
    QPushButton *Button_play;
    QPushButton *Button_about;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPushButton *GameButton_1_2;
    QPushButton *GameButton_1_1;
    QPushButton *GameButton_2_2;
    QPushButton *GameButton_0_2;
    QPushButton *GameButton_0_1;
    QPushButton *GameButton_1_0;
    QPushButton *GameButton_2_1;
    QPushButton *GameButton_0_0;
    QPushButton *GameButton_2_0;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLabel *about_game_text;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QLabel *Thx_4_choosing;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cross_and_nulls)
    {
        if (Cross_and_nulls->objectName().isEmpty())
            Cross_and_nulls->setObjectName(QString::fromUtf8("Cross_and_nulls"));
        Cross_and_nulls->resize(750, 450);
        Cross_and_nulls->setMinimumSize(QSize(680, 0));
        Cross_and_nulls->setMaximumSize(QSize(750, 450));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/images/title_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        Cross_and_nulls->setWindowIcon(icon);
        Cross_and_nulls->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Cross_and_nulls);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        Area_info = new QLabel(centralwidget);
        Area_info->setObjectName(QString::fromUtf8("Area_info"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto Medium")});
        Area_info->setFont(font);
        Area_info->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Area_info);

        Game_label = new QLabel(centralwidget);
        Game_label->setObjectName(QString::fromUtf8("Game_label"));
        Game_label->setMaximumSize(QSize(16777215, 16777215));
        Game_label->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/name.png")));
        Game_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Game_label);

        Label_result = new QLabel(centralwidget);
        Label_result->setObjectName(QString::fromUtf8("Label_result"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Label_result->sizePolicy().hasHeightForWidth());
        Label_result->setSizePolicy(sizePolicy);
        Label_result->setMinimumSize(QSize(0, 30));
        Label_result->setFont(font);
        Label_result->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 5px;\n"
""));
        Label_result->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Label_result);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Button_selectSide_Left = new QPushButton(centralwidget);
        Button_selectSide_Left->setObjectName(QString::fromUtf8("Button_selectSide_Left"));
        Button_selectSide_Left->setMinimumSize(QSize(0, 34));
        Button_selectSide_Left->setStyleSheet(QString::fromUtf8("image: url(:/resources/images/cross_small.png);"));

        horizontalLayout->addWidget(Button_selectSide_Left);

        Button_selectSide_Right = new QPushButton(centralwidget);
        Button_selectSide_Right->setObjectName(QString::fromUtf8("Button_selectSide_Right"));
        Button_selectSide_Right->setMinimumSize(QSize(0, 34));
        Button_selectSide_Right->setStyleSheet(QString::fromUtf8("image: url(:/resources/images/zero_small.png);"));

        horizontalLayout->addWidget(Button_selectSide_Right);


        verticalLayout->addLayout(horizontalLayout);

        Button_play = new QPushButton(centralwidget);
        Button_play->setObjectName(QString::fromUtf8("Button_play"));
        Button_play->setMinimumSize(QSize(0, 38));
        Button_play->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(Button_play);

        Button_about = new QPushButton(centralwidget);
        Button_about->setObjectName(QString::fromUtf8("Button_about"));
        Button_about->setMinimumSize(QSize(0, 38));

        verticalLayout->addWidget(Button_about);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 15, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setMinimumSize(QSize(340, 340));
        tabWidget->setMaximumSize(QSize(340, 340));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
        tab->setSizePolicy(sizePolicy1);
        tab->setMinimumSize(QSize(320, 320));
        tab->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        GameButton_1_2 = new QPushButton(tab);
        GameButton_1_2->setObjectName(QString::fromUtf8("GameButton_1_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(GameButton_1_2->sizePolicy().hasHeightForWidth());
        GameButton_1_2->setSizePolicy(sizePolicy2);
        GameButton_1_2->setMinimumSize(QSize(100, 100));
        GameButton_1_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(GameButton_1_2, 1, 2, 1, 1);

        GameButton_1_1 = new QPushButton(tab);
        GameButton_1_1->setObjectName(QString::fromUtf8("GameButton_1_1"));
        sizePolicy2.setHeightForWidth(GameButton_1_1->sizePolicy().hasHeightForWidth());
        GameButton_1_1->setSizePolicy(sizePolicy2);
        GameButton_1_1->setMinimumSize(QSize(100, 100));
        GameButton_1_1->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(GameButton_1_1, 1, 1, 1, 1);

        GameButton_2_2 = new QPushButton(tab);
        GameButton_2_2->setObjectName(QString::fromUtf8("GameButton_2_2"));
        sizePolicy2.setHeightForWidth(GameButton_2_2->sizePolicy().hasHeightForWidth());
        GameButton_2_2->setSizePolicy(sizePolicy2);
        GameButton_2_2->setMinimumSize(QSize(100, 100));
        GameButton_2_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(GameButton_2_2, 2, 2, 1, 1);

        GameButton_0_2 = new QPushButton(tab);
        GameButton_0_2->setObjectName(QString::fromUtf8("GameButton_0_2"));
        sizePolicy2.setHeightForWidth(GameButton_0_2->sizePolicy().hasHeightForWidth());
        GameButton_0_2->setSizePolicy(sizePolicy2);
        GameButton_0_2->setMinimumSize(QSize(100, 100));
        GameButton_0_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(GameButton_0_2, 0, 2, 1, 1);

        GameButton_0_1 = new QPushButton(tab);
        GameButton_0_1->setObjectName(QString::fromUtf8("GameButton_0_1"));
        sizePolicy2.setHeightForWidth(GameButton_0_1->sizePolicy().hasHeightForWidth());
        GameButton_0_1->setSizePolicy(sizePolicy2);
        GameButton_0_1->setMinimumSize(QSize(100, 100));
        GameButton_0_1->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(GameButton_0_1, 0, 1, 1, 1);

        GameButton_1_0 = new QPushButton(tab);
        GameButton_1_0->setObjectName(QString::fromUtf8("GameButton_1_0"));
        sizePolicy2.setHeightForWidth(GameButton_1_0->sizePolicy().hasHeightForWidth());
        GameButton_1_0->setSizePolicy(sizePolicy2);
        GameButton_1_0->setMinimumSize(QSize(100, 100));
        GameButton_1_0->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(GameButton_1_0, 1, 0, 1, 1);

        GameButton_2_1 = new QPushButton(tab);
        GameButton_2_1->setObjectName(QString::fromUtf8("GameButton_2_1"));
        sizePolicy2.setHeightForWidth(GameButton_2_1->sizePolicy().hasHeightForWidth());
        GameButton_2_1->setSizePolicy(sizePolicy2);
        GameButton_2_1->setMinimumSize(QSize(100, 100));
        GameButton_2_1->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(GameButton_2_1, 2, 1, 1, 1);

        GameButton_0_0 = new QPushButton(tab);
        GameButton_0_0->setObjectName(QString::fromUtf8("GameButton_0_0"));
        sizePolicy2.setHeightForWidth(GameButton_0_0->sizePolicy().hasHeightForWidth());
        GameButton_0_0->setSizePolicy(sizePolicy2);
        GameButton_0_0->setMinimumSize(QSize(100, 100));
        GameButton_0_0->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(GameButton_0_0, 0, 0, 1, 1);

        GameButton_2_0 = new QPushButton(tab);
        GameButton_2_0->setObjectName(QString::fromUtf8("GameButton_2_0"));
        sizePolicy2.setHeightForWidth(GameButton_2_0->sizePolicy().hasHeightForWidth());
        GameButton_2_0->setSizePolicy(sizePolicy2);
        GameButton_2_0->setMinimumSize(QSize(100, 100));
        GameButton_2_0->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(GameButton_2_0, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        about_game_text = new QLabel(tab_2);
        about_game_text->setObjectName(QString::fromUtf8("about_game_text"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto Medium")});
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        about_game_text->setFont(font1);
        about_game_text->setStyleSheet(QString::fromUtf8("font-family: 'Roboto Medium';\n"
"font-size: 15px;"));
        about_game_text->setTextFormat(Qt::PlainText);
        about_game_text->setScaledContents(false);
        about_game_text->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        about_game_text->setWordWrap(true);

        gridLayout_3->addWidget(about_game_text, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Thx_4_choosing = new QLabel(tab_3);
        Thx_4_choosing->setObjectName(QString::fromUtf8("Thx_4_choosing"));
        Thx_4_choosing->setStyleSheet(QString::fromUtf8("font-family: 'Roboto Medium';\n"
"font-size: 15px;"));
        Thx_4_choosing->setTextFormat(Qt::PlainText);
        Thx_4_choosing->setAlignment(Qt::AlignCenter);
        Thx_4_choosing->setWordWrap(true);

        gridLayout_2->addWidget(Thx_4_choosing, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        horizontalLayout_2->addWidget(tabWidget);

        horizontalSpacer_3 = new QSpacerItem(40, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        Cross_and_nulls->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cross_and_nulls);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 22));
        Cross_and_nulls->setMenuBar(menubar);
        statusbar = new QStatusBar(Cross_and_nulls);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Cross_and_nulls->setStatusBar(statusbar);

        retranslateUi(Cross_and_nulls);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Cross_and_nulls);
    } // setupUi

    void retranslateUi(QMainWindow *Cross_and_nulls)
    {
        Cross_and_nulls->setWindowTitle(QCoreApplication::translate("Cross_and_nulls", "\320\232\321\200\320\265\321\201\321\202\320\270\320\272\320\270/\320\235\320\276\320\273\320\270\320\272\320\270", nullptr));
        Area_info->setText(QString());
        Game_label->setText(QString());
        Label_result->setText(QString());
        Button_selectSide_Left->setText(QString());
        Button_selectSide_Right->setText(QString());
        Button_play->setText(QCoreApplication::translate("Cross_and_nulls", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        Button_about->setText(QCoreApplication::translate("Cross_and_nulls", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
        GameButton_1_2->setText(QString());
        GameButton_1_1->setText(QString());
        GameButton_2_2->setText(QString());
        GameButton_0_2->setText(QString());
        GameButton_0_1->setText(QString());
        GameButton_1_0->setText(QString());
        GameButton_2_1->setText(QString());
        GameButton_0_0->setText(QString());
        GameButton_2_0->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Cross_and_nulls", "\320\230\320\263\321\200\320\260", nullptr));
        about_game_text->setText(QCoreApplication::translate("Cross_and_nulls", "\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320\270\320\263\321\200\321\213: \320\222 \320\264\320\260\320\275\320\275\320\276\320\271 \320\270\320\263\321\200\320\265 \320\265\321\201\321\202\321\214 2 \320\272\320\276\320\274\320\260\320\275\320\264\321\213: \320\272\321\200\320\265\321\201\321\202\320\270\320\272\320\270 \320\270 \320\275\320\276\320\273\320\270\320\272\320\270. \320\241\320\274\321\213\321\201\320\273 \320\262 \321\202\320\276\320\274, \321\207\321\202\320\276\320\261\321\213 \320\276\320\264\320\275\320\260 \320\270\320\267 \320\272\320\276\320\274\320\274\320\260\320\275\320\264 \320\267\320\260\320\275\321\217\320\273\320\260 \321\202\321\200\320\270 \320\277\320\276\320\273\321\217 \320\262 \321\200\321\217\320\264 \320\270\320\273\320\270 \320\262 \320\264\320\270\320\260\320\263\320\276\320\275\320\260\320\273\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Cross_and_nulls", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
        Thx_4_choosing->setText(QCoreApplication::translate("Cross_and_nulls", "\320\234\321\213 \321\200\320\260\320\264\321\213, \321\207\321\202\320\276 \320\262\321\213 \321\200\320\265\321\210\320\270\320\273\320\270 \320\276\321\202\320\272\321\200\321\213\321\202\321\214 \321\215\321\202\320\276 \321\202\320\262\320\276\321\200\320\265\320\275\320\270\321\217 \320\263\320\276\321\201\320\277\320\276\320\264\320\260 \320\220\320\273\320\273\320\260\321\205\320\260. \320\235\320\260\320\264\320\265\321\216\321\201\321\214 \320\262\320\260\320\274 \320\277\320\276\320\275\321\200\320\260\320\262\320\270\321\202\321\201\321\217 \321\215\321\202\320\276\321\202 \321\201\320\270\320\274\320\274\321\203\320\273\321\217\321\202\320\276\321\200 \320\270\320\263\321\200\321\213, \320\270\320\261\320\276 \320\275\320\260\320\267\320\262\320\260\321\202\321\214 \321\215\321\202\320\276 \320\270\320\263\321\200\320\276\320\271 \320\274\320\276\320\266\320\265\321\202 \320\273\320\270\321\210\321\214 \321\201\320\273\320\265\320\277\320\276\320\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Cross_and_nulls", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cross_and_nulls: public Ui_Cross_and_nulls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CROSS_AND_NULLS_H
