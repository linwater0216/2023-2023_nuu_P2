/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
20230314

4.35 (Factorial) The factorial of a nonnegative integer n is written n! (pronounced ��n factorial��) and is defined as follows:n! = n �P (n �V 1) �P (n �V 2) �P �K �P 1 (for values of n greater than 1) and n! = 1 (for n = 0 or n = 1).
For example, 5! = 5 �P 4 �P 3 �P 2 �P 1, which is 120. Use while statements in each of the following:
a) Write a program that reads a nonnegative integer and computes and prints its factorial.

*/

#include <iostream>

using namespace std;

int main() {
	int a,t=1;
	cout<<"�п�J�����ơG";
	cin>>a;
	for(int i=1;i<=a;i++){
		t=t*i;
	}
	cout<<t<<endl;
}
