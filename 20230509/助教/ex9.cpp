/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230314


*/
#include<iomanip>
#include <iostream>
#include <string>
using namespace std;
template <typename T>
T factorial(T n){
	if(n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int main()
{
	int a;
	float c;
	char b;
	cin>>b;
	if(b=='i'){
		cin>>a;
		cout<<factorial(a);
	}
	if(b=='f'){
		cin>>c;
		cout<<factorial(c);	
	}
}

