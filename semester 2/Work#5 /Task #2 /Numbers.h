#pragma once
#include <iostream>
#include <vector>
#include "Numbers.cpp"
using namespace std;

class Numbers {
    int length; // Длина массива чисел
    vector <int> nums;
public:
    // Конструктор класса массива чисел
    Numbers() {
    }
    // Конструктор класса массива чисел произвольной длины
    Numbers(int len) {
    }
    int Get_length() {
        return numbers.length;
    }
    
    // Заполнение массива
    Numbers Input(Numbers* numbers2) {
    }

    // Сложение/Вычитание массивов
    Numbers Sum(Numbers numbers1, Numbers numbers2, char sign) { // sign это "+"" или "-"
    }
    // Умножение/деление массива на скаляр
    Numbers Multiply(Numbers numbers, int scalar, char sign) { // sign это "*" или "/"
    }

    // Вывод элемента массива по индексу
    void print(Numbers numbers, int i) {
    }
    // Вывод всего массива
    void print_all(Numbers numbers) {
    }
} numbers;
