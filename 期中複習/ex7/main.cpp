/*
聯合大學資訊工程學系
二年甲班
U1024055
林時瑋
20230314

輸入
Get-Random -Times 10
Set-Random -Seed:Value 0
Get-Random -Times 10
Set-Random -Seed:Time
Get-Random -Times 10
Set-Random -Seed:Value 1680745628
Get-Random -Times 10
^Z
*/
#include"Random.h"
using namespace std;
int main()
{
	Random z;
	string a, b;
	int c;
	while (cin >> a >> b) {
		cout << z.getseed() << endl;
		if (a == "Set-Random") {
			if (b == "-Seed:Value") {
				cin >> c;
				z.set(c);
				cout << "Random.Seed = " << c << endl;
			}
			else {
				if (b == "-Seed:Time") {
					cout << "test";
					size_t aa = time(NULL);
					cout << aa;
					z.set(aa);
					cout << "Random.Seed = " << aa << endl;
				}
			}
		}
		else {
			if (a == "Get-Random" && b == "-Times") {
				cin >> c;
				cout << "[";
				for (int i = 0; i < c - 1; i++) {
					cout << z.get() << ", ";
				}
				cout << z.get() << "]" << endl;
			}
		}
	}
}
