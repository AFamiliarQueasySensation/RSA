#ifndef MAIN_WINDOW_H_
#define MAIN_WINDOW_H_

#include <QMainWindow>
#include <QApplication>
#include <QDebug>
#include <ui_mainwindow.h>

namespace Ui{
    class MainWindow;
}



class MainWindow : public QMainWindow 
{

    Q_OBJECT



    public:
        explicit MainWindow(QWidget *parent=nullptr);


    private:
    Ui::MainWindow ui;

};



#endif // MAIN_WINDOW_H_