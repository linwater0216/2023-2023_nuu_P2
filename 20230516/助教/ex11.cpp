/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
homework1
20230314

Ex11.
請撰寫一程式供輸入兩組數字 a 與 b 之起點(start)與終點(end)(start!=end)，並自起點循
序探索至終點。
接著使用 C++ STL 中的 std::vector(<vector>)儲存所探索到的質數，使該
std::vector 中的第 k 個元素為起點到終點之第 k 個質數。並個別列印出其所存之內容。
最後將兩 std::vector 中同位置元素相乘(若無則忽略)，並將結果另存於一個
std::vector 中。並列印出其所存之內容。
其他需求：
禁用檔案<bits/stdc++.h>
執行結果(灰底部分為使用者輸入)：

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
