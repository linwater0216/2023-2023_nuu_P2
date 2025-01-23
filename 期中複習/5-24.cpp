/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230314

5.23 (Egg-timer Program) Write an application that prints the following egg-timer shape. You may use output statements that print a single asterisk (*), a single hash (#) a single space or a single newline character. Maximize your use of iteration (with nested for statements), and minimize the number of output statements.
9
#########
#*******#
# ***** #
#  ***  #
#   *   #
#  ***  #
# ***** #
#*******#
#########

5.24 (Modified Egg-timer Program) Modify the application you wrote in Exercise 5.23 to read an odd number in the range 1 to 29 to specify the height of the egg-timer. Your program should then display an egg-timer of the appropriate size. (The egg-timer shown above in Exercise 5.23 has a height of 9)

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout<<"請輸入1~29的奇數：";
	cin>>n;
	cout<<endl;
	if(n%2==1&&n>0&&n<30){
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++) {
	            if(i==0||i==n-1) {
	                cout<<"#";
	            }
	            else{
	            	if(i==1||i==n-2) {
		                if(j==0||j==n-1) {
		                    cout<<"#";
		                }
						else{
		                    cout<<"*";
		                }
		            }
		            else{
		                if(j==0||j==n-1){
		                    cout<<"#";
		                }
		                else{
		                	if(j<=n-i-1&&j>=i){
		                		cout<<"*";
							}
							else{
								if(j>=n-i-1&&j<=i){
									cout<<"*";
								}
								else {
				                    cout<<" ";
				                }
							}
						}
		            }
				}
	        }
	        cout << endl;
	    }
	}
}

