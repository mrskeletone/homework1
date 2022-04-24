#ifndef COMPLEX1_H
#define COMPLEX1_H
#include <iostream>
#include <math.h>
using namespace std;
struct  Complex
{
	double im = 0;
	double re = 0;
};
void sum(Complex n1, Complex n2);
void vich(Complex n1, Complex n2);
void modul(Complex n1);
void ym(Complex n1, Complex n2);
void del(Complex n1, Complex n2);
#endif // !COMPLEX_H
