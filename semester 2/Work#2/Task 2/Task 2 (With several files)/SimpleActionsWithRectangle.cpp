#include <iostream>
#include <math.h>
#include "Rectangle.h"
using namespace std;

class Rectangle {
public:
    float x1;
    float x2;
    float y1;
    float y2;
    // Конструктор объекта по умолчанию
    Rectangle() {
        x1 = 0;
        y1 = 0;
        x2 = 0;
        y2 = 0;
    }
    //Конструктор перезагрузки с параметрами;
    Rectangle(float p_x1, float p_x2, float p_y1, float p_y2) {
        x1 = p_x1;
        y1 = p_y1;
        x2 = p_x2;
        y2 = p_y2;
    }
    // Деструктор объекта
    ~Rectangle() {
        cout << "The rectangle has been removed" << endl;
    }
    // Обработка значений полей (Вычисление длины диагонали)
    float CalculatingOfDiagonal(float x1, float x2, float y1, float y2) {
        float diagonal;
        diagonal = pow(((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)), 0.5);
        return diagonal;
    }
    //Строка информации об объекте
    void InfoOfRectangle(float x1, float x2, float y1, float y2) {
        cout << endl << "x1 = " << x1 << ", x2 = " << x2 << ", y1 = " << y1 << ", y2 = " << y2 <<
            ", rectangle's diagonal = " << CalculatingOfDiagonal(x1, y1, x2, y2) << endl;
    }
};