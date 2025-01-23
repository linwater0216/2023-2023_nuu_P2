/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230411

6.31 (Greatest Common Divisor) The greatest common divisor (GCD) of two integers is the largest
integer that evenly divides each of the numbers. Write a function gcd that returns the greatest common divisor of two integers.

*/

#include <iostream>
using namespace std;

int gcd(int a,int b){
	if(b==0)
        return a;
    return gcd(b,a%b);
}
int main() {
    int a,b;
    cout<<"輸入兩個數字："
    cin>>a>>b;
    cout<<"最大公因數"<<gcd(a,b);
    return 0;
}


