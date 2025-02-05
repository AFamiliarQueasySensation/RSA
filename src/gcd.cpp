#include "gcd.h"
#include <iostream>
#include <algorithm>

//Euclidean extended algorithm where gcd(a,b) = gcd(b,r), where r is remainder
// 0 <= r < b
int GCD::gcd(int a, int b)
{
    if (b > a)
    {
        reverse(&a, &b);
    }
    if (a == b)
        return a;

    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

//Reverse the values if a is greater than b
void GCD::reverse(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
