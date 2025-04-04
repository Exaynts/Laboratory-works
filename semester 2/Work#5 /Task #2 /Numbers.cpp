#include <iostream>
#include <vector>
using namespace std;

// Конструктор класса массива чисел
void Numbers() {
 vector <int> numbers(1);
}
// Конструктор класса массива чисел произвольной длины
void Numbers(int n) {
 vector <int> numbers(n);
}
// Длина массива чисел
int Lenght(vector <int> numbers) {
 return int(sizeof(numbers) / sizeof(numbers[0]));
}
// Заполнение массива
vector <int> Input(vector <int> numbers) {
  int Len = Lenght(numbers);
  for(int i = 0; i < Len; i++) {
    cin >> numbers[i];
  }
  return numbers;
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
// Сложение/Вычитание массивов
vector <int > Sum(vector <int> numbers1, vector <int> numbers2, char sign) { // sign это "+"" или "-"
  if (Lenght(numbers1) != Lenght(numbers2)) {
    cout << "Длины массивов различны!" << endl;
    return numbers1;
  }
  else {
    vector <int> Sum(Lenght(numbers1));
    for(int i = 0; i < Lenght(numbers1); i++) {
      Sum[i] = numbers1[i] + numbers2[i];
    }
    return Sum;
  }
}
