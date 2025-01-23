#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include <algorithm>
using namespace std;
int selectionsort(int arr[],int n){
	sort(arr,arr+n);
}
void  show(int arr[],int n){
	int maxi,max=0,mini,min=100;
	cout<<"address   value"<<endl;
	for(int i=0;i<n;i++){
		cout<<&arr[i]<<"  "<<arr[i]<<endl;
		if(arr[i]>max){
			max=arr[i];
			maxi=i;
		}
		if(arr[i]<min){
			min=arr[i];
			mini=i;
		}
	}
	cout<<"max ip = "<<&arr[maxi]<<"  "<<max<<endl;
	cout<<"min ip = "<<&arr[mini]<<"  "<<min<<endl;
}
int main(){
	srand( time(NULL) );
	int n,a;
	cout<<"½Ð¿é¤Jn¡G";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=(rand()%13+2)*7;
	}
	show(arr,n);
	selectionsort(arr,n);
	cout<<"------selection sort------"<<endl;
	show(arr,n);
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<endl;
//	}
}

