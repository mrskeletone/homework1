#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "Если хотитет сложить введите 1,вычесть 2,умножение 3, деление 4 ,модуль 5";
    cout << endl;
    int q;
    cin >> q;
    Complex a{ 5,3 };
    Complex b{ -7,9 };
    switch (q)
    {
    case 1: {

        sum(a, b);
        break; }
    case 2: {
        vich(a, b);
        break; }
    case 3: {

        ym(a, b);
        break; }
    case 4: {

        del(a, b);
        break; }
    case 5: {

        modul(a);
        break; }
    }

    return 0;
}
