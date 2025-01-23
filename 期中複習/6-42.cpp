/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230411

6.42 (Distance Between Points) Write function distance that calculates the distance between two points (x1, y1) and (x2, y2). 
All numbers and return values should be of type double.
*/

#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1,double y1,double x2,double y2)
{
	return sqrt(pow((x1-x2),2)+pow((y1-y2),2)); 
}

int main()
{
	double x[2],y[2];
	cout<<"輸入第一個點：";
	cin>>x[0]>>y[0];
	cout<<"輸入第二個點：";
	cin>>x[1]>>y[1];
	cout<<"距離為："<<distance(x[0],y[0],x[1],y[1])<<endl;
}
