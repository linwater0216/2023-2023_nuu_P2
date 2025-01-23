/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
homework1
20230314
 
Ex2.
請輸入一個五位數的整數，將其分離成五個整數，並反序輸出。其中每個數之間空兩
格。[提示：本題使用除法(/)和取餘數(%)]
輸入：
51483
輸出：
3 8 4 1 5
*/

#include<iostream>
using namespace std;
int main(){
	int a1=0,a[5]={0};
	cin>>a1;
	for(int i=0;i<5;i++){
		a[i]=a1%10;
		a1=a1/10;
	}
	a[4]=a[4]%10;
	for(int i=0;i<5;i++){
		cout<<a[i]<<"  ";
	}
}
