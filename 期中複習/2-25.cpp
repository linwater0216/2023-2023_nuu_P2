/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
20230314

2.25 (Factors) Write a program that reads in three integers and determines and prints if the first two integers are factors of the second. [Hint: Use the remainder operator (%).]

*/

#include<iostream>
using namespace std;
int main(){
	int a1,a2,a3;
	cin>>a1>>a2>>a3;//a3�L�N�q 
	if(a2%a1==0){
		cout<<a1<<"�O"<<a2<<"���]�l"<<endl; 
	}
	else{
		cout<<a1<<"���O"<<a2<<"���]�l"<<endl; 
	}
}
