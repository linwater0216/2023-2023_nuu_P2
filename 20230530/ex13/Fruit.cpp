#include "Fruit.h"
Fruit::Fruit(int a,int b,int c) {
	grapeNum=0;
	bananaNum=0;
	appleNum=0; 
	grapePrice = 0;
	bananaPrice = 0;
	applePrice = 0;
	if (a > 0) {
		grapePrice = a;
	}
	if (b > 0) {
		bananaPrice = b;
	}
	if (c > 0) {
		applePrice = c;
	}
}
Fruit::Fruit() {
	grapeNum = 0;
	bananaNum = 0;
	appleNum = 0;
	grapePrice = 0;
	bananaPrice = 0;
	applePrice = 0;
}
void Fruit::setgrapePrice(int a) {
	grapePrice = a;
}
void Fruit::setbananaPrice(int a) {
	bananaPrice = a;
}
void Fruit::setapplePrice(int a) {
	applePrice = a;
}
void Fruit::setgrapeNum(int a) {
	grapeNum = a;
}
void Fruit::setbananaNum(int a) {
	bananaNum = a;
}
void Fruit::setappleNum(int a) {
	appleNum = a;
}
int Fruit::getgrapePrice() {
	return grapePrice;
}
int Fruit::getbananaPrice() {
	return bananaPrice;
}
int Fruit::getapplePrice() {
	return applePrice;
}
int Fruit::getgrapeNum() {
	return grapeNum;
}
int Fruit::getbananaNum() {
	return bananaNum;
}
int Fruit::getappleNum() {
	return appleNum;
}
void Fruit::show() {
	cout << "�~��  ����  �ƶq" << endl;
	cout << "ī�G  " << getapplePrice() << "    " << getappleNum() << endl;
	cout << "����  " << getbananaPrice() << "    " << getbananaNum() << endl;
	cout << "����  " << getgrapePrice() << "    " << getgrapeNum() << endl;
	cout << "�`���B�G" << total() << " ��" << endl << endl;
}
int Fruit::total() {
	int t = 0;
	t = t + getapplePrice() * getappleNum();
	t = t + getbananaPrice() * getbananaNum();
	t = t + getgrapePrice() * getgrapeNum();
	return t;
}