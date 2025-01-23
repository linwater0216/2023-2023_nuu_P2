#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(int sideA, int sideB);

    void calculate();
};

#endif
