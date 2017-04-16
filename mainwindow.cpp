#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->hetero_pushButton,SIGNAL(clicked(bool)),this,SLOT(pageHetero()));
    QObject::connect(ui->homo_pushButton,SIGNAL(clicked(bool)),this,SLOT(pageHomo()));
    QObject::connect(ui->lesbi_pushButton,SIGNAL(clicked(bool)),this,SLOT(pageLesbi()));
    QObject::connect(ui->validerHetero_pushButton,SIGNAL(clicked(bool)),this,SLOT(pageHetero()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pageHetero()
{
    ui->main_stackedWidget->setCurrentIndex(1);
    QString pourcentageAmour = calculAmourHetero(ui->hommeHetero_lineEdit->text(),ui->femmeHetero_lineEdit->text());
    //qDebug() << pourcentageAmour;
    ui->pourcentageAmour_label->setText(pourcentageAmour);
}
void MainWindow::pageHomo()
{
    ui->main_stackedWidget->setCurrentIndex(2);
}
void MainWindow::pageLesbi()
{
    ui->main_stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_actionRetour_triggered()
{
    ui->main_stackedWidget->setCurrentIndex(0);
}
QString MainWindow::calculAmourHetero(QString h,QString f)
{
    int totalLettre = h.size() + f.size();
    int count = 0;

    if(h.size() < f.size())
    {
         for (int i =0; i < f.size(); i++)
         {
             if(f[i] == h[i])
                 count++;
         }
    }
    else if(f.size() < h.size())
    {
        for (int i =0; i < h.size();i++)
        {
            if(h[i]==f[i])
                count++;
        }
    }

    int totalPourcentage = totalLettre - (count * 2);
    totalPourcentage = totalPourcentage * 10;

    return totalPourcentage;
}
