/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
homework1
20230314
 
Ex1.
�Цb 1 �� 10 �����A�D���Ӿ�ơA�N��Ƥ������Ҧ���Ƭۭ��A�A���Ƥ�������
����ơA�o��B�⪺���G�C
�Ҧp�G�D�� 2 �M 8�A���ۭp�� 2*3*�K*7*8�A�p���o�쪺�ȦA��h 2+3+�K+7+8�A�o
�쪺���G�� 40285�C
����
��J�G2 8
��X�G4028
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
