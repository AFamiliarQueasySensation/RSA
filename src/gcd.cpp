#include "gcd.h"

GCD::GCD(){ }


int GCD::gcd(int a, int b){

    if(a < 0) a = -a;
    if(b < 0) b = -b;


    if(a == 0) return b;
    if(b == 0) return a;

    return gcd_iter(a, b);
}


void GCD::swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int GCD::gcd_iter(int a, int b){
    while(a > 0) {
        if(a < b) {
            swap(a, b);
        }
        a = a % b;
    }
    return b;
}