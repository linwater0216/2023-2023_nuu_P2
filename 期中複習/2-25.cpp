/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230314

2.25 (Factors) Write a program that reads in three integers and determines and prints if the first two integers are factors of the second. [Hint: Use the remainder operator (%).]

*/

#include<iostream>
using namespace std;
int main(){
	int a1,a2,a3;
	cin>>a1>>a2>>a3;//a3無意義 
	if(a2%a1==0){
		cout<<a1<<"是"<<a2<<"的因子"<<endl; 
	}
	else{
		cout<<a1<<"不是"<<a2<<"的因子"<<endl; 
	}
}
