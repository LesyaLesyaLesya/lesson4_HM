// Lesson4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <locale>
#include <vector>
#include <list>
#include <stdlib.h>
#include <time.h>
#include <deque>
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

    deque<char> d{'a','e','o','u'};
    
    Print(d);
    cout << endl << "Input value for insert" << endl;
    char i;
    cin >> i;

    insert_sorted(d, i);
    Print(d);
 
};


void Zadanie2()
{
    /*--------------------------------------------------
    
    ----------------------------------------------------*/
    srand((unsigned)time(NULL));

    vector<double> a(100);
    vector<int> b;

    generate(a.begin(), a.end(), []() {return (double)rand() / RAND_MAX * 100; });
   
    copy(a.begin(), a.end(), ostream_iterator<double>{cout, "  "});

    auto doible_to_int = [](double i) {int int_i = (int)i; return int_i; };
    transform(a.begin(), a.end(), back_inserter(b), doible_to_int);

    cout << endl;
    copy(b.begin(), b.end(), ostream_iterator<int>{cout, "  "});
   
    double error{ 0.0 };
    size_t i{ 0 };
    for_each(a.begin(), a.end(), [=, &error,&i](const auto& elem_a) 
        {error += (elem_a - b.at(i));
         i++; 
        });

    cout << endl;
    cout << "Error = " << error;

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
