/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
homework1
20230314
 
Ex1.
請在 1 至 10 之中，挑選兩個整數，將兩數之間的所有整數相乘，再減掉兩數之間的所
有整數，得到運算的結果。
例如：挑選 2 和 8，接著計算 2*3*…*7*8，計算後得到的值再減去 2+3+…+7+8，得
到的結果為 40285。
測資
輸入：2 8
輸出：4028
*/

#include<iostream>
using namespace std;
int main(){
	int a1=0,a2=0,t=0;
	cin>>a1>>a2;
	t=a1;
	for(int i=a1+1;i<=a2;i++){
		t=t*i;
	}
	for(int i=a1;i<=a2;i++){
		t=t-i;
	}
	cout<<t<<endl;
}
