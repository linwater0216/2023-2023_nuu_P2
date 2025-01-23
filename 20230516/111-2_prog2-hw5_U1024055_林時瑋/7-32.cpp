/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230522

(Find the Maximum Value in an array) Write a recursive function recursiveMaximum that
takes an integer array, a starting subscript and an ending subscript as arguments, and returns the
largest element of the array. The function should stop processing and return when the starting subscript equals the ending subscript
*/
#include <iostream>
#include <iomanip>
using namespace std;
int recursiveMaximum(int a[], int s, int e) {
    if (s==e) {
        return a[s];
    }
    int mid=(s+e)/2;
    int ml = recursiveMaximum(a,s,mid);
    int mr = recursiveMaximum(a,mid+1,e);
    return max(ml, mr);
}
int main() {
    int s;
    cout<<"輸入陣列大小：";
    cin>>s;

    int a[s];
    cout<<"輸入陣列數值：";
    for(int i=0;i<s;i++) {
        cin>>a[i];
    }
    cout<<"最大的數為："<<recursiveMaximum(a,0,s-1)<<endl;

    return 0;
}

