/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230522

7.28 (Palindromic Sentences) A palindrome is a string that’s spelled the same way forward and
backward. Examples of palindromes include “radar” and “Able was I ere I saw Elba.” A palindromic
sentence is a palindrome if the punctuation marks and spaces are ignored. Write a recursive function
testPalindrome that returns true if a string is a palindrome, and false otherwise. Ignore all spaces,
commas, full stops and question marks in the sentence. Hence “red roses run no risk, sir, on nurses
order.” is considered a palindrome. Note that like an array, the square brackets ([]) operator can
be used to iterate through the characters in a string. 
*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int s,e;
bool testPalindrome(string a){
	if(s>=e){
		return true;	
	}
	while (s<e&&!isalnum(a[s])) {
        s++;
    }
	while (s<e&&!isalnum(a[e])) {
        e--;
    }
	char c1=toupper(a[s]);
	char c2=toupper(a[e]);
	if (c1 == c2) {
		s++;
		e--;
        return testPalindrome(a);
    } else {
        return false;
    }
}
int main(){
	string a;
	getline(cin,a);
	s=0;
	e=a.size();
	if(testPalindrome(a)){
		cout << "The sentence is a palindrome." << endl;
	}
	else{
		cout << "The sentence is not a palindrome." << endl;
	}
	
}
