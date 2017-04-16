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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pageHetero()
{
    ui->main_stackedWidget->setCurrentIndex(1);
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
