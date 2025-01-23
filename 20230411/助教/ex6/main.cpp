/*
聯合大學資訊工程學系
二年甲班
U1024055
林時瑋
20230314


*/
#include"Cartesian.h"
using namespace std;

double CartesianDistance(Cartesian a, Cartesian b) {
	return sqrt(pow((a.get_x() - b.get_x()), 2) + pow((a.get_y() - b.get_y()), 2));
}
int main()
{
	int c, d;
	char e='z', f='z';
	cin >> c >> d;
	Cartesian a(c, d);
	cin >> c >> d;
	Cartesian b(c, d);
	cout << "point A: (" << a.get_x() << ", " << a.get_y() << "): " << a.getLength() << endl;
	cout << "point B: (" << b.get_x() << ", " << b.get_y() << "): " << b.getLength() << endl;
	cout << "distance: " << CartesianDistance(a,b) << endl;
	while (1) {
		cin >> e >> f >> c;
		if (e == 'a') {
			if (f == 'x') {
				a.set_x(c);
				cout << "point A: (" << a.get_x() << ", " << a.get_y() << "): " << a.getLength() << endl;
			}
			if (f == 'y') {
				a.set_y(c);
				cout << "point A: (" << a.get_x() << ", " << a.get_y() << "): " << a.getLength() << endl;
			}
		}
		else {
			if (e == 'b') {
				if (f == 'x') {
					b.set_x(c);
					cout << "point B: (" << b.get_x() << ", " << b.get_y() << "): " << b.getLength() << endl;
				}
				if (f == 'y') {
					b.set_y(c);
					cout << "point B: (" << b.get_x() << ", " << b.get_y() << "): " << b.getLength() << endl;
				}
			}
			else {
				if (e == '.' && f == '.' && c == 0) {
					cout << "point A: (" << a.get_x() << ", " << a.get_y() << "): " << a.getLength() << endl;
					cout << "point B: (" << b.get_x() << ", " << b.get_y() << "): " << b.getLength() << endl;
					cout << "distance: " << CartesianDistance(a, b) << endl;
					return 0;
				}
			}
		}
	}
}
