/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230502

6.41 (Recursive Greatest Common Divisor) The greatest common divisor of integers x and y is
the largest integer that evenly divides both x and y. Write a recursive function gcd that returns the
greatest common divisor of x and y, defined recursively as follows: If y is equal to 0, then gcd(x, y)
is x; otherwise, gcd(x, y) is gcd(y, x % y), where % is the remainder operator. [Note: For this algorithm, x must be larger than y.]

*/

#include <iostream>

using namespace std;

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return gcd(y, x % y);
    }
}

int main() {
    int x,y;
    cout<<"Enter two integers: ";
    cin>>x>>y;
    cout<<"The greatest common divisor of "<<x<<" and "<<y<<" is "<<gcd(x, y)<<endl;
    return 0;
}

