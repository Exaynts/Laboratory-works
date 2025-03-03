#pragma once
#include "SimpleActionsWithRectangle.cpp"
#include "RectangleDrawing.cpp"
class Rectangle {
public:
    // Конструктор объекта по умолчанию
    Rectangle() {
    }
    //Конструктор перезагрузки с параметрами;
    Rectangle(float p_x1, float p_x2, float p_y1, float p_y2) {
    }
    // Деструктор объекта
    ~Rectangle() {
    }
    //Отрисовка прямоугольника с помощью псевдографики
    void RectangleDrawing(float x1, float x2, float y1, float y2) {
    }
    // Обработка значений полей (Вычисление длины диагонали)
    float CalculatingOfDiagonal(float x1, float x2, float y1, float y2) {
    }
    //Строка информации об объекте
    void InfoOfRectangle(float x1, float x2, float y1, float y2) {
    }
};