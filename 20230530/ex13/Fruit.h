#ifndef FRUIT_H
#define FRUIT_H
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Fruit
{
public:
	Fruit(int a, int b, int c);
	Fruit();
	void setgrapePrice(int a);
	void setbananaPrice(int a);
	void setapplePrice(int a);
	void setgrapeNum(int a);
	void setbananaNum(int a);
	void setappleNum(int a);
	int getgrapePrice();
	int getbananaPrice();
	int getapplePrice();
	int getgrapeNum();
	int getbananaNum();
	int getappleNum();
	void show();
	int total();
private:
	int grapePrice;
	int bananaPrice;
	int applePrice;
	int grapeNum;
	int bananaNum;
	int appleNum;
};

#endif
