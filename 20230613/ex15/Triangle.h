#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape {
public:
    Triangle(int sideA, int sideB);
    void calculate();
};

#endif
