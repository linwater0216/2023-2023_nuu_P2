/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
homework1
20230314

Ex3.
�����@�����Ʃ��W�� BeverageShop�A�]�쪫�ƺ����A�]���M�w�պ������~��������C
�Ыإߤ@�ӦW�٬� BeverageShop �����O�A�̭��� 3 �Ӹ�ơGBubbleMilkTea(���A int)�B
FruitTea(���A int)�H�� GrapefruitGreenTea(���A int)�A���O���������غc�l�Ӫ�l�Ƴo 3
�Ӹ�ơA�C�Ӹ�Ƴ��������� set function �M get function�C�M��A�g�@�� range �禡
�ӭp��U�~���պ������t�A�o��̤j�γ̤p�ȡA�A�g�@�� display �禡������O���պ�
�᪺���B�H�νd��C
��J�G 
55
50
35
60
55
35
��X�G
BubbleMilkTea�G$60
FruitTea�G$55
GrapefruitGreenTea�G$35
�պ����B���d�򬰡G0~5 ��
*/

#include <iostream>
#include <iomanip>
using namespace std;

class BeverageShop{
public:
	int BubbleMilkTea;
	int FruitTea;
	int GrapefruitGreenTea;
	
	int oldBubbleMilkTea;
	int oldFruitTea;
	int oldGrapefruitGreenTea;
	
	BeverageShop(){
		BubbleMilkTea=0;
		FruitTea=0;
		GrapefruitGreenTea=0;
		oldBubbleMilkTea=0;
		oldFruitTea=0;
		oldGrapefruitGreenTea=0;
	}
	void setBubbleMilkTea(int x){
        BubbleMilkTea=x;
    }
    void setFruitTea(int x){
        FruitTea=x;
    }
    void setGrapefruitGreenTea(int x){
        GrapefruitGreenTea=x;
    }
    
    void setoldBubbleMilkTea(int x){
        oldBubbleMilkTea=x;
    }
    void setoldFruitTea(int x){
        oldFruitTea=x;
    }
    void setoldGrapefruitGreenTea(int x){
        oldGrapefruitGreenTea=x;
    }
    
    int getBubbleMilkTea(){
        return BubbleMilkTea;
    }
    int getFruitTea(){
        return FruitTea;
    }
    int getGrapefruitGreenTea(){
        return GrapefruitGreenTea;
    }
    
    int getoldBubbleMilkTea(){
        return oldBubbleMilkTea;
    }
    int getoldFruitTea(){
        return oldFruitTea;
    }
    int getoldGrapefruitGreenTea(){
        return oldGrapefruitGreenTea;
    }
    void range(){
    	int top=-999,end=999,aa;
    	aa=getBubbleMilkTea()-getoldBubbleMilkTea();
    	if(aa>top){
    		top=aa;
		}
		if(aa<end){
    		end=aa;
		}
		aa=getFruitTea()-getoldFruitTea();
		if(aa>top){
    		top=aa;
		}
		if(aa<end){
    		end=aa;
		}
		aa=getGrapefruitGreenTea()-getoldGrapefruitGreenTea();
		if(aa>top){
    		top=aa;
		}
		if(aa<end){
    		end=aa;
		}
    	cout<<"BubbleMilkTea�G$"<<getBubbleMilkTea()<<endl;
    	cout<<"FruitTea�G$"<<getFruitTea()<<endl;
    	cout<<"GrapefruitGreenTea�G$"<<getGrapefruitGreenTea()<<endl;
    	cout<<"�պ����B���d�򬰡G"<<end<<"~"<<top<<"��"<<endl;
	}
};

int main(){
	BeverageShop a;
	int x[3]={0},y[3]={0};
	for(int i=0;i<3;i++){
		cin>>x[i];
	}
	a.setoldBubbleMilkTea(x[0]);
	a.setoldFruitTea(x[1]);
	a.setoldGrapefruitGreenTea(x[2]);
	for(int i=0;i<3;i++){
		cin>>y[i];
	}
	a.setBubbleMilkTea(y[0]);
	a.setFruitTea(y[1]);
	a.setGrapefruitGreenTea(y[2]);
	a.range();
}
