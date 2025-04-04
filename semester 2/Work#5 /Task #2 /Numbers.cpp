#include <iostream>
#include <vector>
using namespace std;


class Numbers {
    int length; // Длина массива чисел
    vector <int> nums;
public:
    // Конструктор класса массива чисел
    void Numbers() {
        int length = 1;
        vector <int> numbers(length);
    }
    // Конструктор класса массива чисел произвольной длины
    void Numbers(int len) {
        int length = len;
        vector <int> numbers(length);
    }
    int Get_length() {
        return numbers.length;
    }
    
    // Заполнение массива
    Numbers Input(Numbers* numbers2) {
        for (int i = 0; i < numbers.Get_length(); i++) {
            int value;
            cout << endl << "i = ";
            cin >> value;
            numbers.nums[i] = value;
        }
        return numbers;
    }

    // Сложение/Вычитание массивов
    Numbers Sum(Numbers numbers1, Numbers numbers2, char sign) { // sign это "+"" или "-"
        if (numbers1.Get_length() != numbers2.Get_length()) {
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
            Numbers Sum(numbers1.Get_length());
            for (int i = 0; i < numbers1.Get_length(); i++) {
                Sum.nums[i] = numbers1.nums[i] + s*numbers2.nums[i];
            }
            return Sum;
        }
    }
    // Умножение/деление массива на скаляр
    Numbers Multiply(Numbers numbers, int scalar, char sign) { // sign это "*" или "/"
        if (sign == '*') {
            for (int i = 0; i < numbers.Get_length(); i++) {
                numbers.nums[i] *= scalar;
            }
        }
        else if (sign == '/') {
            if (scalar == 0) {
                cout << "Division by zero!" << endl;
            }
            else {
                for (int i = 0; i < numbers.Get_length(); i++) {
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
        if (i < numbers.Get_length()) {
            cout << numbers.nums[i] << endl;
        }
        else {
            cout << "Element can't be found" << endl;
        }
    }
    // Вывод всего массива
    void print_all(Numbers numbers) {
        for (int i = 0; i < numbers.Get_length(); i++) {
            cout << numbers.nums[i] << endl;
        }
    }
} numbers;
