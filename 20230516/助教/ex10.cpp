/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
homework1
20230314
 
Ex10.
�м��g�@�{���i�гs���J�h����� 1~100(�t)���������Z�A�èϥ� C++ STL ����
std::array(<array>)�x�s�U���ƪ��ƶq�C���J�W�L�d�򪺼Ʀr�h�����J�A��ø�s����
���ΥH�ΰ϶��H�ơC
ø�s�������ήɭY�ƶq���s�h����ܡF�H�Ʀr�b�������Ϋ����ܰ϶��H�ơA�ó̫�H
�Ÿ��ƶqø�s�϶��H�ƪ����ϡC
��L�ݨD�G
�T���ɮ�<bits/stdc++.h>
���浲�G(�ǩ��������ϥΪ̿�J)�G
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
