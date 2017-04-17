#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->main_stackedWidget->setCurrentIndex(0);
    QObject::connect(ui->hetero_pushButton,SIGNAL(clicked(bool)),this,SLOT(pageHetero()));
    QObject::connect(ui->homo_pushButton,SIGNAL(clicked(bool)),this,SLOT(pageHomo()));
    QObject::connect(ui->lesbi_pushButton,SIGNAL(clicked(bool)),this,SLOT(pageLesbi()));
    QObject::connect(ui->validerHetero_pushButton,SIGNAL(clicked(bool)),this,SLOT(pageHetero()));
    QObject::connect(ui->validerHomo_pushButton,SIGNAL(clicked(bool)),this,SLOT(pageHomo()));
    QObject::connect(ui->validerLesbi_pushButton,SIGNAL(clicked(bool)),this,SLOT(pageLesbi()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pageHetero()
{
    ui->main_stackedWidget->setCurrentIndex(1);
    calculAmourHetero(ui->hommeHetero_lineEdit->text(), ui->femmeHetero_lineEdit->text());
}
void MainWindow::pageHomo()
{
    ui->main_stackedWidget->setCurrentIndex(2);
    calculAmourHomo(ui->homme1_lineEdit->text(), ui->homme2_lineEdit->text());
}
void MainWindow::pageLesbi()
{
    ui->main_stackedWidget->setCurrentIndex(3);
    calculAmourLesbi(ui->femme1_lineEdit->text(),ui->femme2_lineEdit->text());
}

void MainWindow::on_actionRetour_triggered()
{
    ui->main_stackedWidget->setCurrentIndex(0);
}
void MainWindow::calculAmourHetero(QString h,QString f)
{
    QPixmap coeurRose ("coeurRose.png");
    QPixmap coeurRoseFonce ("coeurRoseFonce.png");
    QPixmap coeurRouge ("coeurRouge.png");
    QPixmap coeurRougeFonce ("coeurRougeFonce.png");

    int totalLettre = h.size() + f.size();

    if(totalLettre > 0 && totalLettre <= 5)
    {
        ui->love_label->setPixmap(coeurRose);
        ui->love_label->show();
    }
    else if(totalLettre > 5 && totalLettre <= 10)
    {
        ui->love_label->setPixmap(coeurRoseFonce);
        ui->love_label->show();
    }
    else if(totalLettre > 10 && totalLettre <= 15)
    {
        ui->love_label->setPixmap(coeurRouge);
        ui->love_label->show();
    }
    else if(totalLettre > 15)
    {
        ui->love_label->setPixmap(coeurRougeFonce);
        ui->love_label->show();
    }
}
void MainWindow::calculAmourHomo(QString h1, QString h2)
{
    QPixmap coeurRose ("coeurRose.png");
    QPixmap coeurRoseFonce ("coeurRoseFonce.png");
    QPixmap coeurRouge ("coeurRouge.png");
    QPixmap coeurRougeFonce ("coeurRougeFonce.png");

    int totalLettre = h1.size() + h2.size();

    if(totalLettre > 0 && totalLettre <= 5)
    {
        ui->loveHomo_label->setPixmap(coeurRose);
        ui->loveHomo_label->show();
    }
    else if(totalLettre > 5 && totalLettre <= 10)
    {
        ui->loveHomo_label->setPixmap(coeurRoseFonce);
        ui->loveHomo_label->show();
    }
    else if(totalLettre > 10 && totalLettre <= 15)
    {
        ui->loveHomo_label->setPixmap(coeurRouge);
        ui->loveHomo_label->show();
    }
    else if(totalLettre > 15)
    {
        ui->loveHomo_label->setPixmap(coeurRougeFonce);
        ui->loveHomo_label->show();
    }
}
void MainWindow::calculAmourLesbi(QString f1, QString f2)
{
    QPixmap coeurRose ("coeurRose.png");
    QPixmap coeurRoseFonce ("coeurRoseFonce.png");
    QPixmap coeurRouge ("coeurRouge.png");
    QPixmap coeurRougeFonce ("coeurRougeFonce.png");

    int totalLettre = f1.size() + f2.size();

    if(totalLettre > 0 && totalLettre <= 5)
    {
        ui->loveLesbi_label->setPixmap(coeurRose);
        ui->loveLesbi_label->show();
    }
    else if(totalLettre > 5 && totalLettre <= 10)
    {
        ui->loveLesbi_label->setPixmap(coeurRoseFonce);
        ui->loveLesbi_label->show();
    }
    else if(totalLettre > 10 && totalLettre <= 15)
    {
        ui->loveLesbi_label->setPixmap(coeurRouge);
        ui->loveLesbi_label->show();
    }
    else if(totalLettre > 15)
    {
        ui->loveLesbi_label->setPixmap(coeurRougeFonce);
        ui->loveLesbi_label->show();
    }
}
