#include "complex1.h"

void sum(Complex n1, Complex n2)
{
    cout << n1.im + n2.im << "i " << n1.re + n2.re << endl;
}

void vich(Complex n1, Complex n2)
{
    cout << n1.im - n2.im << "i " << n1.re - n2.re << endl;
}

void modul(Complex n1)
{
    cout << sqrt(pow(n1.im, 2) + pow(n1.re, 2)) << endl;
}

void ym(Complex n1, Complex n2)
{
    cout << n1.im * n2.re + n1.re * n2.im << "i " << (n1.im * n2.im) * (-1) + n1.re * n2.re << endl;
}

void del(Complex n1, Complex n2)
{
    cout << (n1.im * n2.re + n1.re * (-1) * n2.im) / (pow(n2.re, 2) + pow(n2.im, 2)) << "i " << ((n1.im * n2.im) * (-1) + n1.re * n2.re) / (pow(n2.re, 2) + pow(n2.im, 2)) << endl;
}
