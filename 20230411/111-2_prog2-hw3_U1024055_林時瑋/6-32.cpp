/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
20230411

6.32 (Quality Points for Numeric Grades) Write a function qualityPoints that inputs a student��s average and returns 4 
if a student��s average is 90�V100, 3 if the average is 80�V89, 2 
if the average is 70�V79, 1 if the average is 60�V69 and 0 if the average is lower than 60.
*/

#include <iostream>

using namespace std;
int qualityPoints(int a){
	switch(a/10){
		case 10:
		case 9:
			return 4;
		case 8:
			return 3;
		case 7:
			return 2;
		case 6:
			return 1;
		default:
			return 0;
	}
}
int main() {
	int a;
	cout<<"�п�J���ơG";
	while(cin>>a,a!=0){
		cout<<qualityPoints(a)<<endl;
		cout<<"�п�J���ơG";
	}
} 
