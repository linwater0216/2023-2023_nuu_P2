/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230314


*/
#include<iomanip>
#include <iostream>
#include <cmath>
using namespace std;
class {
	private:
		
	public:
		
		
};


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

