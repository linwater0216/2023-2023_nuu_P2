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
void split(int num){
	if(num==1){
		cout<<num;
	}
	else{
		if(num==2){
			cout<<num;
		}
		else{
//			cout<<"=>";
			split(num/2);
//			cout<<",_";
			split(num/2+num%2);
		}
	}
}
void split(int num, string& b){
	//string z="=>"+a/2+",_"+(a/2+a%2);
	if(num==1){
		b+='0'+num;
	}
	else{
		if(num==2){
			b+='0'+num;
		}
		else{
//			cout<<"=>";
			split(num/2,b);
//			cout<<",_";
			split(num/2+num%2,b);
		}
	}
}

int main()
{
	int a;
	string b;
	cin>>a;
	cout<<"splut(num):";
	split(a);
	cout<<endl;
	
	cout<<"splut(num,record):";
	split(a,b);
	cout<<b;
	
}

