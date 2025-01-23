/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230314

4.35 (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”) and is defined as follows:n! = n · (n – 1) · (n – 2) · … · 1 (for values of n greater than 1) and n! = 1 (for n = 0 or n = 1).
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120. Use while statements in each of the following:
b) Write a program that estimates the value of the mathematical constant e by using the
formula:
*/

#include <iostream>

using namespace std;

int main() {
	int a;
	double t=1,den;
	cout<<"請輸入階乘數：";
	cin>>a;
	for(int i=1;i<=a;i++){
		den=1;
		for(int j=i;j>0;j--){
			den=den*j;
		}
		t=t+1.0/den;
	}
	cout<<t<<endl;
}
