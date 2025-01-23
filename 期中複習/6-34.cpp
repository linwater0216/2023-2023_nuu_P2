/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230411

6.34 (Guess-the-Number Game) Write a program that plays the game of “guess the number” as
follows: Your program chooses the number to be guessed by selecting an integer at random in the
range 1 to 1000. The program then displays the following:

I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess.

The player then types a first guess. The program responds with one of the following

1. Excellent! You guessed the number!
 Would you like to play again (y or n)?
2. Too low. Try again.
3. Too high. Try again.

If the player’s guess is incorrect, your program should loop until the player finally gets the number
right. Your program should keep telling the player Too high or Too low to help the player “zero in”
on the correct answer.
*/

#include <iostream>
//#include <stdlib.h> /* 亂數相關函數 */
#include <time.h>   /* 時間相關函數 */
using namespace std;

int gtn(){
	char p='a';
	int a=-1,z=rand()%1000;
	z++;
	cout<<"I have a number between 1 and 1000."<<endl;
	cout<<"Can you guess my number?"<<endl;
	cout<<"Please type your first guess."<<endl;
	cout<<z<<endl;
	while(a!=z){
		cin>>a;
		if(a>z){
			cout<<"Too high. Try again."<<endl;
		}
		if(a<z){
			cout<<"Too low. Try again."<<endl;
		}
		if(a==z){
			cout<<"Excellent! You guessed the number!"<<endl;
			cout<<"Would you like to play again (y or n)?"<<endl;
			cin>>p;
			if(p=='y'){
				gtn();
			}
			else{
				return 0;
			}
		}
	}
}
int main() {
	/* 設定亂數種子 */
	srand( time(NULL) );
	gtn();
}
