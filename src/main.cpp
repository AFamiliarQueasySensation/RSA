#include <iostream>
#include <QApplication>
#include <QMainWindow>
#include <string>
#include <cmath>
#include <cstdlib>
#include "mainwindow.h"
#include "RSA.h"


int main(int argc, char* argv[]) {

    RSA temp;
    int msg = 5;
    std::cout << "Encrypting Message: " << msg << std::endl;
    int e_msg =  temp.messageEncrypt(msg, temp.getPublicKey());
    std::cout << "Encrypted Message: " << e_msg << std::endl;
    int d_msg = temp.messageDecrypt(e_msg);
    std::cout << "Decrypted Message Message: " << d_msg << std::endl;
    /*
    QApplication a(argc, argv);
    MainWindow window;
    window.show();


    a.exec();
    */
}