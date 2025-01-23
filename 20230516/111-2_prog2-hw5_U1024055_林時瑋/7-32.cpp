/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
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
    cout<<"��J�}�C�j�p�G";
    cin>>s;

    int a[s];
    cout<<"��J�}�C�ƭȡG";
    for(int i=0;i<s;i++) {
        cin>>a[i];
    }
    cout<<"�̤j���Ƭ��G"<<recursiveMaximum(a,0,s-1)<<endl;

    return 0;
}

