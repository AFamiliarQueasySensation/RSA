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
        int messageEncrypt(int msg);
        int messageDecrypt(int msg);
        

        int findPrime(int n);
        int getPublicKey();


    private:
        int findE(int N, int phi);
        int findD(int e, int phi);
        int calculator(int base, int expo, int modular);

        int q;
        int p;

        int m; // p * q
        int phi;

        int e; //encryptor
        int d; //decryptor (prob keep this safe)


};