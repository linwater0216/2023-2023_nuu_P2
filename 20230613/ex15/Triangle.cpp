#include "Triangle.h"

// Construct a default circle object
Triangle::Triangle(int sideA, int sideB) : Shape(sideA, sideB) {}
void Triangle::calculate() {
    area = (a * b) / 2; // �p�⭱�n�A�T���Ϊ����n = (�� * ��) / 2
}