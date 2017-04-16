#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    QString calculAmourHetero(QString h, QString f);

private slots:
    void on_actionRetour_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
