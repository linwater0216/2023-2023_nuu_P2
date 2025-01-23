#include "Triangle.h"

// Construct a default circle object
Triangle::Triangle(int sideA, int sideB) : Shape(sideA, sideB) {}
void Triangle::calculate() {
    area = (a * b) / 2; // 計算面積，三角形的面積 = (底 * 高) / 2
}