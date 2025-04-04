#include <iostream>
#incluse "Numbers.h"
using namespace std;

int main() {
    // Определение массивов
    /*
    int n1, n2; // Длины массивов
    cout << "n1 = ";
    cin >> n1;
    cout << "n2 = ";
    cin >> n2;
    */
    int n1 = 3;
    int n2 = 2;
    //Numbers() numbers1;
    Numbers numbers1(n1);
    Numbers numbers2(n2);

    numbers1.Input(numbers1);

    // Вывод данных
    return 0;
}
