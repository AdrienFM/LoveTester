/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRetour;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *main_stackedWidget;
    QWidget *page;
    QLabel *logo_label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *button_verticalLayout;
    QPushButton *hetero_pushButton;
    QPushButton *homo_pushButton;
    QPushButton *lesbi_pushButton;
    QWidget *page_1;
    QLabel *hommeHetero_label;
    QLabel *love_label;
    QLabel *femmeHetero_label;
    QLineEdit *hommeHetero_lineEdit;
    QLineEdit *femmeHetero_lineEdit;
    QPushButton *validerHetero_pushButton;
    QWidget *page_2;
    QLabel *homme1_label;
    QLabel *homme2_label;
    QLineEdit *homme1_lineEdit;
    QLineEdit *homme2_lineEdit;
    QLabel *loveHomo_label;
    QPushButton *validerHomo_pushButton;
    QWidget *page_3;
    QLabel *femme2_label;
    QLabel *femme1_label;
    QLineEdit *femme1_lineEdit;
    QLineEdit *femme2_lineEdit;
    QPushButton *validerLesbi_pushButton;
    QLabel *loveLesbi_label;
    QWidget *page_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1174, 725);
        actionRetour = new QAction(MainWindow);
        actionRetour->setObjectName(QStringLiteral("actionRetour"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        main_stackedWidget = new QStackedWidget(centralWidget);
        main_stackedWidget->setObjectName(QStringLiteral("main_stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        logo_label = new QLabel(page);
        logo_label->setObjectName(QStringLiteral("logo_label"));
        logo_label->setGeometry(QRect(440, 90, 231, 75));
        QFont font;
        font.setFamily(QStringLiteral("Rockwell Condensed"));
        font.setPointSize(48);
        logo_label->setFont(font);
        verticalLayoutWidget = new QWidget(page);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(470, 220, 160, 271));
        button_verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        button_verticalLayout->setSpacing(6);
        button_verticalLayout->setContentsMargins(11, 11, 11, 11);
        button_verticalLayout->setObjectName(QStringLiteral("button_verticalLayout"));
        button_verticalLayout->setContentsMargins(0, 0, 0, 0);
        hetero_pushButton = new QPushButton(verticalLayoutWidget);
        hetero_pushButton->setObjectName(QStringLiteral("hetero_pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/logos/Hetero_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        hetero_pushButton->setIcon(icon);
        hetero_pushButton->setIconSize(QSize(64, 64));

        button_verticalLayout->addWidget(hetero_pushButton);

        homo_pushButton = new QPushButton(verticalLayoutWidget);
        homo_pushButton->setObjectName(QStringLiteral("homo_pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/logos/homo_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        homo_pushButton->setIcon(icon1);
        homo_pushButton->setIconSize(QSize(64, 64));

        button_verticalLayout->addWidget(homo_pushButton);

        lesbi_pushButton = new QPushButton(verticalLayoutWidget);
        lesbi_pushButton->setObjectName(QStringLiteral("lesbi_pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/logos/lesbian_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        lesbi_pushButton->setIcon(icon2);
        lesbi_pushButton->setIconSize(QSize(64, 64));

        button_verticalLayout->addWidget(lesbi_pushButton);

        main_stackedWidget->addWidget(page);
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        hommeHetero_label = new QLabel(page_1);
        hommeHetero_label->setObjectName(QStringLiteral("hommeHetero_label"));
        hommeHetero_label->setGeometry(QRect(230, 280, 131, 21));
        love_label = new QLabel(page_1);
        love_label->setObjectName(QStringLiteral("love_label"));
        love_label->setGeometry(QRect(570, 110, 111, 91));
        love_label->setFocusPolicy(Qt::NoFocus);
        femmeHetero_label = new QLabel(page_1);
        femmeHetero_label->setObjectName(QStringLiteral("femmeHetero_label"));
        femmeHetero_label->setGeometry(QRect(750, 280, 231, 16));
        hommeHetero_lineEdit = new QLineEdit(page_1);
        hommeHetero_lineEdit->setObjectName(QStringLiteral("hommeHetero_lineEdit"));
        hommeHetero_lineEdit->setGeometry(QRect(230, 300, 271, 20));
        femmeHetero_lineEdit = new QLineEdit(page_1);
        femmeHetero_lineEdit->setObjectName(QStringLiteral("femmeHetero_lineEdit"));
        femmeHetero_lineEdit->setGeometry(QRect(750, 300, 301, 20));
        validerHetero_pushButton = new QPushButton(page_1);
        validerHetero_pushButton->setObjectName(QStringLiteral("validerHetero_pushButton"));
        validerHetero_pushButton->setGeometry(QRect(210, 510, 849, 81));
        main_stackedWidget->addWidget(page_1);
        hommeHetero_label->raise();
        hommeHetero_label->raise();
        love_label->raise();
        femmeHetero_label->raise();
        hommeHetero_lineEdit->raise();
        femmeHetero_lineEdit->raise();
        validerHetero_pushButton->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        homme1_label = new QLabel(page_2);
        homme1_label->setObjectName(QStringLiteral("homme1_label"));
        homme1_label->setGeometry(QRect(260, 270, 131, 16));
        homme2_label = new QLabel(page_2);
        homme2_label->setObjectName(QStringLiteral("homme2_label"));
        homme2_label->setGeometry(QRect(740, 270, 131, 16));
        homme1_lineEdit = new QLineEdit(page_2);
        homme1_lineEdit->setObjectName(QStringLiteral("homme1_lineEdit"));
        homme1_lineEdit->setGeometry(QRect(260, 290, 191, 20));
        homme2_lineEdit = new QLineEdit(page_2);
        homme2_lineEdit->setObjectName(QStringLiteral("homme2_lineEdit"));
        homme2_lineEdit->setGeometry(QRect(740, 290, 151, 20));
        loveHomo_label = new QLabel(page_2);
        loveHomo_label->setObjectName(QStringLiteral("loveHomo_label"));
        loveHomo_label->setGeometry(QRect(530, 180, 141, 111));
        validerHomo_pushButton = new QPushButton(page_2);
        validerHomo_pushButton->setObjectName(QStringLiteral("validerHomo_pushButton"));
        validerHomo_pushButton->setGeometry(QRect(500, 390, 171, 23));
        main_stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        femme2_label = new QLabel(page_3);
        femme2_label->setObjectName(QStringLiteral("femme2_label"));
        femme2_label->setGeometry(QRect(710, 250, 131, 16));
        femme1_label = new QLabel(page_3);
        femme1_label->setObjectName(QStringLiteral("femme1_label"));
        femme1_label->setGeometry(QRect(230, 250, 131, 16));
        femme1_lineEdit = new QLineEdit(page_3);
        femme1_lineEdit->setObjectName(QStringLiteral("femme1_lineEdit"));
        femme1_lineEdit->setGeometry(QRect(230, 270, 191, 20));
        femme2_lineEdit = new QLineEdit(page_3);
        femme2_lineEdit->setObjectName(QStringLiteral("femme2_lineEdit"));
        femme2_lineEdit->setGeometry(QRect(710, 270, 151, 20));
        validerLesbi_pushButton = new QPushButton(page_3);
        validerLesbi_pushButton->setObjectName(QStringLiteral("validerLesbi_pushButton"));
        validerLesbi_pushButton->setGeometry(QRect(470, 370, 171, 23));
        loveLesbi_label = new QLabel(page_3);
        loveLesbi_label->setObjectName(QStringLiteral("loveLesbi_label"));
        loveLesbi_label->setGeometry(QRect(500, 160, 141, 111));
        main_stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        main_stackedWidget->addWidget(page_4);

        gridLayout->addWidget(main_stackedWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1174, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionRetour);

        retranslateUi(MainWindow);
        QObject::connect(mainToolBar, SIGNAL(actionTriggered(QAction*)), hommeHetero_lineEdit, SLOT(clear()));
        QObject::connect(mainToolBar, SIGNAL(actionTriggered(QAction*)), femmeHetero_lineEdit, SLOT(clear()));
        QObject::connect(mainToolBar, SIGNAL(actionTriggered(QAction*)), love_label, SLOT(clear()));
        QObject::connect(mainToolBar, SIGNAL(actionTriggered(QAction*)), homme1_lineEdit, SLOT(clear()));
        QObject::connect(mainToolBar, SIGNAL(actionTriggered(QAction*)), homme2_lineEdit, SLOT(clear()));
        QObject::connect(mainToolBar, SIGNAL(actionTriggered(QAction*)), loveHomo_label, SLOT(clear()));
        QObject::connect(mainToolBar, SIGNAL(actionTriggered(QAction*)), femme1_lineEdit, SLOT(clear()));
        QObject::connect(mainToolBar, SIGNAL(actionTriggered(QAction*)), loveLesbi_label, SLOT(clear()));
        QObject::connect(mainToolBar, SIGNAL(actionTriggered(QAction*)), femme2_lineEdit, SLOT(clear()));

        main_stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionRetour->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRetour->setToolTip(QApplication::translate("MainWindow", "Revenir au menu principal", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        logo_label->setText(QApplication::translate("MainWindow", "Love Tester", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        hetero_pushButton->setToolTip(QApplication::translate("MainWindow", "H\303\251t\303\251rosexuelle", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        hetero_pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        homo_pushButton->setToolTip(QApplication::translate("MainWindow", "HomoSexuel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        homo_pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        lesbi_pushButton->setToolTip(QApplication::translate("MainWindow", "Lesbienne", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lesbi_pushButton->setText(QString());
        hommeHetero_label->setText(QApplication::translate("MainWindow", "Entrer le nom de l'homme", Q_NULLPTR));
        love_label->setText(QString());
        femmeHetero_label->setText(QApplication::translate("MainWindow", "Entrer le nom de la femme", Q_NULLPTR));
        validerHetero_pushButton->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        homme1_label->setText(QApplication::translate("MainWindow", "Entrer le nom de l'homme", Q_NULLPTR));
        homme2_label->setText(QApplication::translate("MainWindow", "Entrer le nomde l'homme", Q_NULLPTR));
        loveHomo_label->setText(QString());
        validerHomo_pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        femme2_label->setText(QApplication::translate("MainWindow", "Entrer le nom de la femme", Q_NULLPTR));
        femme1_label->setText(QApplication::translate("MainWindow", "Entrer le nom de la femme", Q_NULLPTR));
        femme1_lineEdit->setText(QString());
        femme2_lineEdit->setText(QString());
        validerLesbi_pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        loveLesbi_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
