﻿#include <iostream>
#include <fstream>
#include "complex.h"
using namespace std;

int main()
{
    ifstream fin("txt.txt");
    int a, b, c, n, q = 0, w = 0; double max = 0;
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> a >> b;
        Complex c{ a,b };
        if (modul(c) > max)
        {
            max = modul(c);
            q = a;
            w = b;
        }
    }
    cout << q << "i + " << w;
    return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
