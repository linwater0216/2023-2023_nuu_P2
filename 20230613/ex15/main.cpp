#include "Triangle.h"
#include "Rectangle.h"

using namespace std;
int main() {
    Rectangle rectangle(5, 10);
    Triangle triangle(4, 6);

    rectangle.calculate();
    triangle.calculate();

    cout << "Rectangle ";
    rectangle.show(); // ��ܪ���Ϊ����n

    cout << "Triangle ";
    triangle.show(); // ��ܤT���Ϊ����n

    return 0;
}