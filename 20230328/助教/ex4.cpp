/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230314

Ex4.
請連續輸入多筆成績，並判斷各筆成績是否及格(大於等於 60)，最終輸出及格與不及
格個數。[提示：本題使用 while 與 if…else]
輸入：
58
46
77
89
61
42
83
輸出：
Passed：4
Failed：3
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a,p=0,f=0;
	while(cin>>a&&a!=0){
		if(a>59){
			p++;
		}
		else{
			f++;
		}
	}
	cout<<"Passed："<<p<<endl;
	cout<<"Failed："<<f<<endl;
}

