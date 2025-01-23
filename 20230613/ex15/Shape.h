#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <iomanip>
using namespace std;

class Shape {
protected:
    int a; // 邊長 a
    int b; // 邊長 b
    int area; // 面積

public:
    Shape(int sideA, int sideB);
    virtual void calculate() = 0; // 虛擬函式，用於計算面積
    void show();
};
#endif
