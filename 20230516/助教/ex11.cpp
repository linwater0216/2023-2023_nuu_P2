/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
homework1
20230314

Ex11.
�м��g�@�{���ѿ�J��ռƦr a �P b ���_�I(start)�P���I(end)(start!=end)�A�æ۰_�I�`
�Ǳ����ܲ��I�C
���ۨϥ� C++ STL ���� std::vector(<vector>)�x�s�ұ����쪺��ơA�ϸ�
std::vector ������ k �Ӥ������_�I����I���� k �ӽ�ơC�íӧO�C�L�X��Ҧs�����e�C
�̫�N�� std::vector ���P��m�����ۭ�(�Y�L�h����)�A�ñN���G�t�s��@��
std::vector ���C�æC�L�X��Ҧs�����e�C
��L�ݨD�G
�T���ɮ�<bits/stdc++.h>
���浲�G(�ǩ��������ϥΪ̿�J)�G

*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int text(int ax,int ay,int bx,int by){
	vector<int> arr;
	vector<int> brr;
	if(ax>ay){
		for(int i=ax;i>=ay;i--){
			int coun=0;
			for(int j=1;j<=i;j++){
				if(i%j==0){
					coun++;
				}
			}
			if(coun==2){
				arr.push_back(i);
			}
		}
	}
	else{
		for(int i=ax;i<=ay;i++){
			int coun=0;
			for(int j=1;j<=i;j++){
				if(i%j==0){
					coun++;
				}
			}
			if(coun==2){
				arr.push_back(i);
			}
		}
	}
	if(bx>by){
		for(int i=bx;i>=by;i--){
			int coun=0;
			for(int j=1;j<=i;j++){
				if(i%j==0){
					coun++;
				}
			}
			if(coun==2){
				brr.push_back(i);
			}
		}
	}
	else{
		for(int i=bx;i<=by;i++){
			int coun=0;
			for(int j=1;j<=i;j++){
				if(i%j==0){
					coun++;
				}
			}
			if(coun==2){
				brr.push_back(i);
			}
		}
	}
	cout<<"a_vector = [";
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	cout<<"]"<<endl;
	
	cout<<"b_vector = [";
	for(int i=0;i<brr.size();i++){
		cout<<brr[i]<<" ";
	}
	cout<<"]"<<endl;
	cout<<"mix_vector = [";
	if(arr.size()>brr.size()){
		for(int i=0;i<brr.size();i++){
			if(arr[i]!=0&&brr[i]!=0){
				cout<<arr[i]*brr[i];
			}
			cout<<" ";
		}
	}
	else{
		for(int i=0;i<brr.size();i++){
			if(arr[i]!=0&&brr[i]!=0){
				cout<<arr[i]*brr[i];
			}
			cout<<" ";
		}
	}
	cout<<"]"<<endl;
}

int main(){
	int z=0;
	while(z<3){
		int ax,ay,bx,by;
		cout<<"a_start, a_end : ";
		cin>>ax>>ay;
		cout<<endl;
		cout<<"b_start, b_end : ";
		cin>>bx>>by;
		cout<<endl;
		text(ax,ay,bx,by);
		z++;
	}
	
}
