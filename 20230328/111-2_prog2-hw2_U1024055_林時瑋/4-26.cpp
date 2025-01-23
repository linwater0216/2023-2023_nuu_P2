/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230314

4.26 (Square of Asterisks) Write a program that reads in the size of the side of a square, then prints a hollow square of that size out of asterisks and blanks. Your program should work for squares of all side sizes between 1 and 20. For example, if your program reads a size of 5, it should print
*****
*   *
*   *
*   *
*****

*/

#include <iostream>

using namespace std;

int main() {
    int s;
    cin>>s;
    for (int i=0;i<s;i++){
        for (int j=0;j<s;j++){
            if (i==0||i==s-1||j==0||j==s-1){
                cout<<"*";
            } else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}


