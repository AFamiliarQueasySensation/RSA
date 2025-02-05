#pragma once

#include <iostream>
#include "gcd.h"
#include <vector>
#include <cstdLib>
#include <cmath>
#include <QDebug>
#include <string>

class RSA
{
    public:
        RSA();
        ~RSA();
        void asciiToString(std::string str);
        void stringToAscii(std::string str);
        int messageEncrypt(int msg, int e);
        int messageDecrypt(int msg);
        int checkCoPrime(int num1, int num2);


        int findPrime(int n);


        int getPublicKey() const;


    private:
        int findD(int e, int phi);
        int calculator(int base, int expo, int modular);

        int q;
        int p;

        int m; // p * q
        int phi;

        int e; //encryptor
        int d; //decryptor (prob keep this safe)


};