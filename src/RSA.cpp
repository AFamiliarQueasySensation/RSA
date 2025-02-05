#include "RSA.h"

RSA::RSA()
{

    p = 2;
    q = 7;

    m = p * q;

    phi = (p - 1) * (q - 1);

    e = 5;
    d = 11;
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
    long long res = 1;
    res = pow((double)msg, (double)exp);
    res = res % mod;
    return res;

}

int RSA::messageEncrypt(int msg, int e)
{
    return calculator(msg, e, m);
}

int RSA::messageDecrypt(int msg)
{
    return calculator(msg, d, m);
}

int RSA::checkCoPrime(int m, int phi)
{
    GCD gcd;

    for (int i = 2; i < phi; i++)
    {
        if (gcd.gcd(i, phi) == 1)
        {
            return i;
        }
    }
    return 0;
}

void RSA::asciiToString(std::string str)
{
    int num = 0;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {

        num = num * 10 + (str[i] - '0');

        if (num >= 32 && num <= 122)
        {

            // Convert number to char
            char ch = (char)num;
            std::cout << ch;

            num = 0;
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
int RSA::getPublicKey() const
{
    return m;
}

RSA::~RSA() {}