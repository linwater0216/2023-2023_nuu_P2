#include "Rectangle.h"

// Construct a default retangle object
Rectangle::Rectangle(int sideA, int sideB) : Shape(sideA, sideB) {}

void Rectangle::calculate() {
    area = a * b; // 計算面積，長方形的面積 = 長 * 寬
}