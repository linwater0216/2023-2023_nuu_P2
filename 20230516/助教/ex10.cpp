/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
homework1
20230314
 
Ex10.
請撰寫一程式可請連續輸入多筆位於 1~100(含)之間的成績，並使用 C++ STL 中的
std::array(<array>)儲存各分數的數量。當輸入超過範圍的數字則停止輸入，並繪製分布
情形以及區間人數。
繪製分布情形時若數量為零則不顯示；以數字在分布情形後方顯示區間人數，並最後以
符號數量繪製區間人數長條圖。
其他需求：
禁用檔案<bits/stdc++.h>
執行結果(灰底部分為使用者輸入)：
09
18
07
23
09
24
08
28
43
51
33
30
0
*/

#include<iostream>
using namespace std;
int main(){
//	cout<<"text"<<endl;
	int a,b,arr[1000]={},n=0,ans[10][10]={};
	while(cin>>a){
		if(a>100||a<1){
			break;
		}
		arr[n]=a;
		n++;
	}
	for(int i=0;i<n;i++){
		a=arr[i]/10;
		b=arr[i]%10;
		if(b==0){
			a--;
		}
		ans[a][b]+=1;
	}
	cout<<"91~100:[";
	a=0;
	for(int i=1;i<10;i++){
		if(ans[9][i]==0){
			cout<<" ,";
		}
		else{
			cout<<ans[9][i]<<",";
			a++;
		}
	}
	if(ans[9][0]==0){
		cout<<" ]: "<<a<<":";
	}
	else{
		cout<<ans[9][0]<<"]: ";
		a+=ans[9][0];
		cout<<a<<":";
		
	}
	for(int i=0;i<a;i++){
		cout<<"*";
	}
	cout<<endl;
	
	cout<<"81~90:[";
	a=0;
	for(int i=1;i<10;i++){
		if(ans[8][i]==0){
			cout<<" ,";
		}
		else{
			cout<<ans[8][i]<<",";
			a++;
		}
	}
	if(ans[8][0]==0){
		cout<<" ]: "<<a<<":";
	}
	else{
		cout<<ans[8][0]<<"]: ";
		a+=ans[8][0];
		cout<<a<<":";
	}
	for(int i=0;i<a;i++){
		cout<<"*";
	}
	cout<<endl;
	
	cout<<"71~80:[";
	a=0;
	for(int i=1;i<10;i++){
		if(ans[7][i]==0){
			cout<<" ,";
		}
		else{
			cout<<ans[7][i]<<",";
			a++;
		}
	}
	if(ans[7][0]==0){
		cout<<" ]: "<<a<<":";
	}
	else{
		cout<<ans[7][0]<<"]: ";
		a+=ans[7][0];
		cout<<a<<":";
	}
	for(int i=0;i<a;i++){
		cout<<"*";
	}
	cout<<endl;
	
	cout<<"61~70:[";
	a=0;
	for(int i=1;i<10;i++){
		if(ans[6][i]==0){
			cout<<" ,";
		}
		else{
			cout<<ans[6][i]<<",";
			a++;
		}
	}
	if(ans[6][0]==0){
		cout<<" ]: "<<a<<":";
	}
	else{
		cout<<ans[6][0]<<"]: ";
		a+=ans[6][0];
		cout<<a<<":";
	}
	for(int i=0;i<a;i++){
		cout<<"*";
	}
	cout<<endl;
	
	cout<<"51~60:[";
	a=0;
	for(int i=1;i<10;i++){
		if(ans[5][i]==0){
			cout<<" ,";
		}
		else{
			cout<<ans[5][i]<<",";
			a++;
		}
	}
	if(ans[5][0]==0){
		cout<<" ]: "<<a<<":";
	}
	else{
		cout<<ans[5][0]<<"]: ";
		a+=ans[5][0];
		cout<<a<<":";
	}
	for(int i=0;i<a;i++){
		cout<<"*";
	}
	cout<<endl;
	
	cout<<"41~50:[";
	a=0;
	for(int i=1;i<10;i++){
		if(ans[4][i]==0){
			cout<<" ,";
		}
		else{
			cout<<ans[4][i]<<",";
			a++;
		}
	}
	if(ans[4][0]==0){
		cout<<" ]: "<<a<<":";
	}
	else{
		cout<<ans[4][0]<<"]: ";
		a+=ans[4][0];
		cout<<a<<":";
	}
	for(int i=0;i<a;i++){
		cout<<"*";
	}
	cout<<endl;
	
	cout<<"31~40:[";
	a=0;
	for(int i=1;i<10;i++){
		if(ans[3][i]==0){
			cout<<" ,";
		}
		else{
			cout<<ans[3][i]<<",";
			a++;
		}
	}
	if(ans[3][0]==0){
		cout<<" ]: "<<a<<":";
	}
	else{
		cout<<ans[3][0]<<"]: ";
		a+=ans[3][0];
		cout<<a<<":";
	}
	for(int i=0;i<a;i++){
		cout<<"*";
	}
	cout<<endl;
	
	cout<<"21~30:[";
	a=0;
	for(int i=1;i<10;i++){
		if(ans[2][i]==0){
			cout<<" ,";
		}
		else{
			cout<<ans[2][i]<<",";
			a++;
		}
	}
	if(ans[2][0]==0){
		cout<<" ]: "<<a<<":";
	}
	else{
		cout<<ans[2][0]<<"]: ";
		a+=ans[2][0];
		cout<<a<<":";
	}
	for(int i=0;i<a;i++){
		cout<<"*";
	}
	cout<<endl;
	
	cout<<"11~20:[";
	a=0;
	for(int i=1;i<10;i++){
		if(ans[1][i]==0){
			cout<<" ,";
		}
		else{
			cout<<ans[1][i]<<",";
			a++;
		}
	}
	if(ans[1][0]==0){
		cout<<" ]: "<<a<<":";
	}
	else{
		cout<<ans[1][0]<<"]: ";
		a+=ans[1][0];
		cout<<a<<":";
	}
	for(int i=0;i<a;i++){
		cout<<"*";
	}
	cout<<endl;
	
	cout<<"1~10:[";
	a=0;
	for(int i=1;i<10;i++){
		if(ans[0][i]==0){
			cout<<" ,";
		}
		else{
			cout<<ans[0][i]<<",";
			a++;
		}
	}
	if(ans[0][0]==0){
		cout<<" ]: "<<a<<":";
	}
	else{
		cout<<ans[0][0]<<"]: ";
		a+=ans[0][0];
		cout<<a<<":";
	}
	for(int i=0;i<a;i++){
		cout<<"*";
	}
	cout<<endl;
	
}
