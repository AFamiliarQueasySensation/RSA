#include "RSA.h"

RSA::RSA()
{

    p = findPrime(100);
    q = findPrime(150);

    m = p * q;


    phi = (p - 1) * (q - 1);

    e = findE(m,phi);
    d = findD(e, phi);
}

// Should find the d
int RSA::findD(int e, int phi)
{
    for (int d = 2; d < phi; d++)
    {
        if ((e * d) % phi == 1)
            return d;
    }
    return -1;
}

int RSA::calculator(int msg, int exp, int mod)
{
    //Start off modding the message not sure if this breaks anything
    int res = 1;
    while (exp >= 1){
        res = (res * msg) % mod;
        exp -= 1;
    }
    return res;

}

int RSA::messageEncrypt(int msg)
{
    return calculator(msg, e, m);
}

int RSA::messageDecrypt(int msg)
{
    return calculator(msg, d, m);
}

int RSA::findE(int N, int phi){
    int pass = 2;
    for (int i = 2; i < phi; i++){
        if (GCD::gcd(i, N) == 1 && GCD::gcd(i, phi) == 1){
            return i;
        }
    }
}

// You pass a random number through this and it will generate a prime number
int RSA::findPrime(int number)
{

    // Unfortunate base case
    if (number == 0)
    {

        // Maybe this is very exploitable but its okay for now
        return RSA::findPrime(number + 182);
    }

    for (int i = 2; i <= (int)sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return RSA::findPrime(number - 1);
        }
    }

    return number;
}

// Returns the public key that you give to other people
int RSA::getPublicKey()
{
    return m;
}

RSA::~RSA() {}