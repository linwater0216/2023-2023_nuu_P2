/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
20230314

Ex5.
(�ƧQ�p��)�Y�Ȧ�~�Q�v p%�A�����s�J���� m ���A�п�X���� n �~�����U�~�����M
(�Ĥ@�~������)
��J�G
�~�Q�v�G1.8
�����G20000
�ɶ��G5
��X�G
�� 1 �~�G20000
�� 2 �~�G20360
�� 3 �~�G20726
�� 4 �~�G21100
�� 5 �~�G21479
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
			cout<<"��"<<i+1<<"�~�G"<<m<<endl;
		}
		else{
			cout<<fixed<<setprecision(0)<<"��"<<i+1<<"�~�G"<<m<<endl; 
		}
		m=m*z;
	}
}

