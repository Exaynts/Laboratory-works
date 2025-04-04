#pragma once
#include <iostream>
#include "Numbers.cpp"
using namespace std;

class Numbers {
public:
    // Конструктор класса массива чисел
    Numbers() {}
    // Длина массива чисел
    int Lenght(vector <int> numbers) {}
    // Обращение к элементу массива
    int Index(vector <int> numbers, int i) {}
    // Заполнение массива
    vector <int> Input(vector <int> numbers) {}
    // Сложение/Вычитание массивов
    vector <int > Sum(vector <int> numbers1, vector <int> numbers2, char sign) {}
    // Деструктор класса массива чисел
    ~Numbers() {
        cout << "Numbers-object has been destructed" << endl;
    }
} numbers;
