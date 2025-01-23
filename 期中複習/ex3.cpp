/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
homework1
20230314

Ex3.
今有一間飲料店名為 BeverageShop，因原物料漲價，因此決定調漲部分品項的價格。
請建立一個名稱為 BeverageShop 的類別，裡面有 3 個資料：BubbleMilkTea(型態 int)、
FruitTea(型態 int)以及 GrapefruitGreenTea(型態 int)，類別中必須有建構子來初始化這 3
個資料，每個資料都有對應的 set function 和 get function。然後再寫一個 range 函式
來計算各品項調漲的價差，得到最大及最小值，再寫一個 display 函式顯示類別中調漲
後的金額以及範圍。
輸入： 
55
50
35
60
55
35
輸出：
BubbleMilkTea：$60
FruitTea：$55
GrapefruitGreenTea：$35
調漲金額的範圍為：0~5 元
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
    	cout<<"BubbleMilkTea：$"<<getBubbleMilkTea()<<endl;
    	cout<<"FruitTea：$"<<getFruitTea()<<endl;
    	cout<<"GrapefruitGreenTea：$"<<getGrapefruitGreenTea()<<endl;
    	cout<<"調漲金額的範圍為："<<end<<"~"<<top<<"元"<<endl;
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
