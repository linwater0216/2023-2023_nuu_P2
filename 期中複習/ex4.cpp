/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
20230314

Ex4.
�гs���J�h�����Z�A�çP�_�U�����Z�O�_�ή�(�j�󵥩� 60)�A�̲׿�X�ή�P����
��ӼơC[���ܡG���D�ϥ� while �P if�Kelse]
��J�G
58
46
77
89
61
42
83
��X�G
Passed�G4
Failed�G3
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
	cout<<"Passed�G"<<p<<endl;
	cout<<"Failed�G"<<f<<endl;
}

