#include"Cartesian.h"
using namespace std;
Cartesian::Cartesian(int a, int b) {
	x = a;
	y = b;
}
void Cartesian::set_x(int a) {
	x = a;
}
void Cartesian::set_y(int a) {
	y = a;
}
int Cartesian::get_x() {
	return x;
}
int Cartesian::get_y() {
	return y;
}
double Cartesian::getLength() {
	return sqrt(pow(x, 2) + pow(y, 2));
}