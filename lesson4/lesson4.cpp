// Lesson4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <locale>
#include <vector>
#include <list>
#include <algorithm>
#include <string_view>
using namespace std;

template <template <typename, typename> class T, typename N, typename Tit>
void insert_sorted(T<N, Tit>& container, const N& i)
{
    //typename T<N>
    const auto bound = lower_bound(begin(container), end(container), i);
    container.insert(bound, i);
}

template<template<typename, typename> class T, typename N, typename Tit>
void Print(const T<N,Tit>& container)
{
    copy(container.begin(), container.end(), ostream_iterator<N>{cout, " "});
}
void Zadanie1()
{
    /*--------------------------------------------------
    Имеется отсортированный массив целых чисел. Необходимо разработать функцию insert_sorted, 
    которая принимает вектор и новое число и вставляет новое число в определенную позицию в векторе,
    чтобы упорядоченность контейнера сохранялась. Реализуйте шаблонную функцию insert_sorted,
    которая сможет аналогично работать с любым контейнером, содержащим любой тип значения.
    ----------------------------------------------------*/
    vector<int> v{1,6,18,22,50,65,77,101};

    list<double> l{ 1,1.18, 8,88.5 };

    Print(l);
    cout << endl << "Input value for insert" << endl;
    double i;
    cin >> i;

    insert_sorted(l, i);
    Print(l);
 
};


void Zadanie2()
{
    /*--------------------------------------------------
    
    ----------------------------------------------------*/

    


};




void Zadanie3()
{
    /*--------------------------------------------------
    
    ----------------------------------------------------*/
  


};


int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите номер задания цифрой" << std::endl;
    unsigned short nomerZadania;

    std::cin >> nomerZadania;

    switch (nomerZadania)
    {
    case 1:Zadanie1(); break;

    case 2:Zadanie2(); break;

    case 3:Zadanie3(); break;

    default: break;
    }


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
