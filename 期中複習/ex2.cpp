/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
homework1
20230314
 
Ex2.
�п�J�@�Ӥ���ƪ���ơA�N����������Ӿ�ơA�äϧǿ�X�C�䤤�C�ӼƤ����Ũ�
��C[���ܡG���D�ϥΰ��k(/)�M���l��(%)]
��J�G
51483
��X�G
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
