#include "Triangle.h"
#include "Rectangle.h"

using namespace std;
int main() {
    Rectangle rectangle(5, 10);
    Triangle triangle(4, 6);

    rectangle.calculate();
    triangle.calculate();

    cout << "Rectangle ";
    rectangle.show(); // 顯示長方形的面積

    cout << "Triangle ";
    triangle.show(); // 顯示三角形的面積

    return 0;
}