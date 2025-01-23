#include "Fruit.h"
using namespace std;
int main() {
	Fruit Fruit;
	int a;
	cout << "蘋果初始價格：";
	cin >> a;
	Fruit.setapplePrice(a);
	cout << "香蕉初始價格：";
	cin >> a;
	Fruit.setbananaPrice(a);
	cout << "葡萄初始價格：";
	cin >> a;
	Fruit.setgrapePrice(a);
	cout << "欲購買的蘋果數量：";
	cin >> a;
	Fruit.setappleNum(a);
	cout << "欲購買的香蕉數量：";
	cin >> a;
	Fruit.setbananaNum(a);
	cout << "欲購買的葡萄數量：";
	cin >> a;
	Fruit.setgrapeNum(a);
	Fruit.show();

	char b;
	string c;
	int d;
	cout << "是否修改價格？";
	cin >> b; 
	while (b == 'y') {
		cout << "修改價格：";
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
		cout << "是否繼續修改？";
		cin >> b;
	}

	cout << "是否修改數量？";
	cin >> b;
	while (b == 'y') {
		cout << "修改數量：";
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
		cout << "是否繼續修改？";
		cin >> b;
	}
	
	Fruit.show();
	
}
