#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <time.h>
#include <stdlib.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void pageHetero();
    void pageHomo();
    void pageLesbi();
    void calculAmourHetero(QString h, QString f);
    void calculAmourHomo(QString h1, QString h2);
    void calculAmourLesbi(QString f1, QString f2);

private slots:
    void on_actionRetour_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
