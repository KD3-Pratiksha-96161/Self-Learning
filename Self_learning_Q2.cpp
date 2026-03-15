#include <iostream>
using namespace std;

// Inline function for factorial
inline int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

// Inline function for power
inline int power(int base, int exp)
{
    int result = 1;
    for(int i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int num = 5;
    int base = 2, exponent = 3;

    cout << "Factorial of " << num << " = " << factorial(num) << endl;
    cout << "Power = " << power(base, exponent) << endl;

    return 0;
}