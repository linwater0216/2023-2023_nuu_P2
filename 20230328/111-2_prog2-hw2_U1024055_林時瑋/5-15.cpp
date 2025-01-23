/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230314

5.15 (Triangle-Printing Program) Write an application that displays the following patterns separately, one below the other. Use for loops to generate the patterns. All asterisks (*) should be printed by a single statement of the form cout << '*'; which causes the asterisks to print side by side. A
statement of the form cout << '\n'; can be used to move to the next line. A statement of the form
cout << ' '; can be used to display a space for the last two patterns. There should be no other output
statements in the program. [Hint: The last two patterns require that each line begin with an appropriate number of blank spaces.]
(a)    (b)     (c)    (d) 
* ********** ********** *
** ********* ********* **
*** ******** ******** ***
**** ******* ******* ****
***** ****** ****** *****
****** ***** ***** ******
******* **** **** *******
******** *** *** ********
********* ** ** *********
********** * * **********

*/



#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int b;
	cout<<"請輸入三角形邊長：";
	cin>>b;
	cout<<"(a)    (b)     (c)    (d)"<<endl;
	for(int i=1;i<=b;i++){
		for(int j=1;j<=b;j++){
			if(i>=j){
				cout<<"*";
			}
		}
		cout<<" ";
		for(int j=1;j<=b;j++){
			if(i<=j){
				cout<<"*";
			}
		}
		cout<<" ";
		for(int j=1;j<=b;j++){
			if(i+j<=b+1){
				cout<<"*";
			}
		}
		cout<<" ";
		for(int j=1;j<=b;j++){
			if(i+j>=b+1){
				cout<<"*";
			}
		}
		cout<<endl;
	}
}
