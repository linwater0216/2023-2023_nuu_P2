#include "Fruit.h"
using namespace std;
int main() {
	Fruit Fruit;
	int a;
	cout << "ī�G��l����G";
	cin >> a;
	Fruit.setapplePrice(a);
	cout << "������l����G";
	cin >> a;
	Fruit.setbananaPrice(a);
	cout << "�����l����G";
	cin >> a;
	Fruit.setgrapePrice(a);
	cout << "���ʶR��ī�G�ƶq�G";
	cin >> a;
	Fruit.setappleNum(a);
	cout << "���ʶR�������ƶq�G";
	cin >> a;
	Fruit.setbananaNum(a);
	cout << "���ʶR������ƶq�G";
	cin >> a;
	Fruit.setgrapeNum(a);
	Fruit.show();

	char b;
	string c;
	int d;
	cout << "�O�_�ק����H";
	cin >> b; 
	while (b == 'y') {
		cout << "�ק����G";
		cin >> c >> d;
		if (c == "apple") {
			Fruit.setapplePrice(d);
		}
		if (c == "banana") {
			Fruit.setbananaPrice(d);
		}
		if (c == "grape") {
			Fruit.setgrapePrice(d);
		}
		cout << "�O�_�~��ק�H";
		cin >> b;
	}

	cout << "�O�_�ק�ƶq�H";
	cin >> b;
	while (b == 'y') {
		cout << "�ק�ƶq�G";
		cin >> c >> d;
		if (c == "apple") {
			Fruit.setappleNum(d);
		}
		if (c == "banana") {
			Fruit.setbananaNum(d);
		}
		if (c == "grape") {
			Fruit.setgrapeNum(d);
		}
		cout << "�O�_�~��ק�H";
		cin >> b;
	}
	
	Fruit.show();
	
}
