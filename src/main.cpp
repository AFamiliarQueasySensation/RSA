#include <iostream>
#include <QApplication>
#include <QMainWindow>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include "mainwindow.h"
#include "RSA.h"


int main(int argc, char* argv[]) {



    //assert(3 == GCD::gcd(3,9));

    
    RSA temp;
    int msg = 9782;
    std::cout << "Encrypting Message: " << msg << std::endl;
    int e_msg =  temp.messageEncrypt(msg);
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