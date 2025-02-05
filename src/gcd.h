#pragma once
#include <cmath>

class GCD{

    public: 
        GCD();
        int gcd(int a, int b);

        
    private:
        void swap(int &a, int &b);
        int gcd_iter(int a, int b);


};