/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230314

Ex5.
(複利計算)某銀行年利率 p%，今欲存入本金 m 元，請輸出未來 n 年內的各年本息和
(第一年為本金)
輸入：
年利率：1.8
本金：20000
時間：5
輸出：
第 1 年：20000
第 2 年：20360
第 3 年：20726
第 4 年：21100
第 5 年：21479
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int m,y;
	double z;
	cin>>z>>m>>y;
	z=z/100+1;
	for(int i=0;i<y;i++){
		if(i==0){
			cout<<"第"<<i+1<<"年："<<m<<endl;
		}
		else{
			cout<<fixed<<setprecision(0)<<"第"<<i+1<<"年："<<m<<endl; 
		}
		m=m*z;
	}
}

