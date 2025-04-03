#include <iostream>
#include <vector>
using namespace std;

// Конструктор класса Legs
void Numbers() {
	vector <int> numbers(1);
}
// Длина массива чисел
int Lenght(vector <int> numbers) {
	return int(size(numbers) / sizeof(numbers[0]));
}
// Обращение к элементу массива
int Index(vector <int> numbers, int i) {
	if (i < Lenght(numbers))
		return numbers[i];
	else {
		cout << "Element can't be found" << endl;
		return 0;
	}
}
