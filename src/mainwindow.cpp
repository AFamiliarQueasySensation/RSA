
#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent){
        
        ui.setupUi(this);
        this->setWindowTitle("RSA");
        this->setFixedSize(500,500);

        


}