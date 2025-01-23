#ifndef Cartesian_h
#define Cartesian_h
#include <iostream>
#include <cmath>
class Cartesian {
private:
	int x;
	int y;
public:
	Cartesian(int, int);
	void set_x(int);
	void set_y(int);
	int get_x();
	int get_y();
	double getLength();
};
#endif