/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
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
	cout<<"��J�Ĥ@���I�G";
	cin>>x[0]>>y[0];
	cout<<"��J�ĤG���I�G";
	cin>>x[1]>>y[1];
	cout<<"�Z�����G"<<distance(x[0],y[0],x[1],y[1])<<endl;
}
