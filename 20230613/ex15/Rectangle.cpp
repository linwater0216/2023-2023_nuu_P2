#include "Rectangle.h"

// Construct a default retangle object
Rectangle::Rectangle(int sideA, int sideB) : Shape(sideA, sideB) {}

void Rectangle::calculate() {
    area = a * b; // �p�⭱�n�A����Ϊ����n = �� * �e
}