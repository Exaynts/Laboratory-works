#include <iostream>
#include <vector>
using namespace std;


    // Конструктор класса массива чисел
    Numbers() {
        int lenght = 1;
        vector <int> numbers(lenght);
    }
    // Конструктор класса массива чисел произвольной длины
    Numbers(int len) {
        int lenght = len;
        vector <int> numbers(lenght);
    }
    int Get_lenght() {
        return lenght;
    }
    
    // Заполнение массива
    Numbers Input(Numbers& numbers) {
        for (int i = 0; i < lenght; i++) {
            int value;
            cout << endl << "i = ";
            cin >> value;
            numbers.nums[i] = value;
        }
        return numbers;
    }

    // Сложение/Вычитание массивов
    Numbers Sum(Numbers numbers1, Numbers numbers2, char sign) { // sign это "+"" или "-"
        if (numbers1.Get_lenght() != numbers2.Get_lenght()) {
            cout << "Длины массивов различны!" << endl;
            return numbers1;
        }
        else {
            int s;
            if (sign == '+')
                s = 1;
            else if (sign == '-')
                s = -1;
            else {
                cout << "Char error!";
                return numbers1;
            }
            Numbers Sum(numbers1.Get_lenght());
            for (int i = 0; i < numbers1.Get_lenght(); i++) {
                Sum.nums[i] = numbers1.nums[i] + s*numbers2.nums[i];
            }
            return Sum;
        }
    }
    // Умножение/деление массива на скаляр
    Numbers Multiply(Numbers numbers, int scalar, char sign) { // sign это "*" или "/"
        if (sign == '*') {
            for (int i = 0; i < numbers.Get_lenght(); i++) {
                numbers.nums[i] *= scalar;
            }
        }
        else if (sign == '/') {
            if (scalar == 0) {
                cout << "Division by zero!" << endl;
            }
            else {
                for (int i = 0; i < numbers.Get_lenght(); i++) {
                    numbers.nums[i] /= scalar;
                }
            }
        }
        else {
            cout << "Char error!";
        }
        return numbers;
    }

    // Вывод элемента массива по индексу
    void print(Numbers numbers, int i) {
        if (i < numbers.Get_lenght()) {
            cout << numbers.nums[i] << endl;
        }
        else {
            cout << "Element can't be found" << endl;
        }
    }
    // Вывод всего массива
    void print_all(Numbers numbers) {
        for (int i = 0; i < numbers.Get_lenght(); i++) {
            cout << numbers.nums[i] << endl;
        }
    }
