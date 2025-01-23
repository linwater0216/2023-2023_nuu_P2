#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <iomanip>
using namespace std;

class Shape {
protected:
    int a; // ��� a
    int b; // ��� b
    int area; // ���n

public:
    Shape(int sideA, int sideB);
    virtual void calculate() = 0; // �����禡�A�Ω�p�⭱�n
    void show();
};
#endif
