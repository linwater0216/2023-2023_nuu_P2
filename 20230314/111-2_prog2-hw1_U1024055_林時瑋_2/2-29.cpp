/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230314

2.29 (Table) Using the techniques of this chapter, write a program that calculates the surface area
and volume of cubes with face lengths of 0 to 4 cm. Use tabs to print the following neatly formatted
table of values:

Face length Surface area Volume
of cube (cm) of cube (cm^2) of cube(cm^3)
0 0 0
1 6 1
2 24 8
3 54 27
4 96 64

*/

#include<iostream>
using namespace std;
int main(){
	int a[5][3]={};
	cout<<"Face length Surface area Volume"<<endl;
	cout<<"of cube (cm) of cube (cm^2) of cube(cm^3)"<<endl;
	for(int i=0;i<5;i++){
		a[i][0]=i;
		a[i][1]=a[i][0]*a[i][0]*6;
		a[i][2]=a[i][0]*a[i][0]*a[i][0];
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<"                   ";
		}
		cout<<endl;
	}
	
}
