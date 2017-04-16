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
    QLineEdit *hommeHetero_lineEdit;
    QLineEdit *femmeHetero_lineEdit;
    QLabel *hommeHetero_label;
    QLabel *femmeHetero_label;
    QPushButton *validerHetero_pushButton;
    QLabel *pourcentageAmour_label;
    QWidget *page_2;
    QWidget *page_3;
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
        logo_label->raise();
        verticalLayoutWidget->raise();
        verticalLayoutWidget->raise();
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        hommeHetero_lineEdit = new QLineEdit(page_1);
        hommeHetero_lineEdit->setObjectName(QStringLiteral("hommeHetero_lineEdit"));
        hommeHetero_lineEdit->setGeometry(QRect(230, 300, 231, 20));
        femmeHetero_lineEdit = new QLineEdit(page_1);
        femmeHetero_lineEdit->setObjectName(QStringLiteral("femmeHetero_lineEdit"));
        femmeHetero_lineEdit->setGeometry(QRect(700, 300, 231, 20));
        hommeHetero_label = new QLabel(page_1);
        hommeHetero_label->setObjectName(QStringLiteral("hommeHetero_label"));
        hommeHetero_label->setGeometry(QRect(250, 260, 141, 16));
        femmeHetero_label = new QLabel(page_1);
        femmeHetero_label->setObjectName(QStringLiteral("femmeHetero_label"));
        femmeHetero_label->setGeometry(QRect(720, 260, 151, 16));
        validerHetero_pushButton = new QPushButton(page_1);
        validerHetero_pushButton->setObjectName(QStringLiteral("validerHetero_pushButton"));
        validerHetero_pushButton->setGeometry(QRect(430, 440, 271, 31));
        pourcentageAmour_label = new QLabel(page_1);
        pourcentageAmour_label->setObjectName(QStringLiteral("pourcentageAmour_label"));
        pourcentageAmour_label->setGeometry(QRect(480, 100, 221, 61));
        QFont font1;
        font1.setPointSize(26);
        pourcentageAmour_label->setFont(font1);
        main_stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        main_stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        main_stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        main_stackedWidget->addWidget(page_4);

        gridLayout->addWidget(main_stackedWidget, 0, 0, 1, 1);

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

        main_stackedWidget->setCurrentIndex(1);


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
        femmeHetero_label->setText(QApplication::translate("MainWindow", "Entrer le nom de la femme", Q_NULLPTR));
        validerHetero_pushButton->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        pourcentageAmour_label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
