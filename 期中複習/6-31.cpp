/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
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
    cout<<"��J��ӼƦr�G"
    cin>>a>>b;
    cout<<"�̤j���]��"<<gcd(a,b);
    return 0;
}


