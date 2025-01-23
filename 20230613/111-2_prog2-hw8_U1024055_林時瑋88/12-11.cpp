/*
�p�X�j�Ǹ�T�u�{�Ǩt
�G�~�үZ 
U1024055
�L��޳
20230523

9.18 (Constructors and Destructors) What happens when a return type, even void, is specified
for a constructor or destructor?
9.19 (Date Class Modification) Modify class Date in Fig. 9.18 to have the following capabilities:
a) Output the date in multiple formats such as
DDD YYYY
MM/DD/YY
June 14, 1992
b) Use overloaded constructors to create Date objects initialized with dates of the formats
in part (a).
c) Create a Date constructor that reads the system date using the standard library functions
of the <ctime> header and sets the Date members. See your compiler��s reference documentation or http://en.cppreference.com/w/cpp/chrono/c for information on the
functions in header <ctime>. You might also want to check out C++11��s chrono library
at http://en.cppreference.com/w/cpp/chrono.
In Chapter 10, we��ll be able to create operators for testing the equality of two dates and for comparing dates to determine whether one date is prior to, or after, another.

*/
//Fig. 9.18: Date.h
// Date class definition; Member functions defined in Date.cpp
#ifndef DATE H
#define DATE H
#include <string>
#include <ctime>
#include <iostream>
using namespace std;

class Date {
public:
    static const unsigned int monthsPerYear = 12; // �@�~���X�Ӥ��

    explicit Date(unsigned int = 1, unsigned int = 1, unsigned int = 1900);
    Date(const string&);
    Date(){
    	month=1;
    	day=1;
    	year=1;
	}

    string toString() const{
    	string a;
    	a+=month;
		a+=day;
		a+=year;
		return a;
	} // �ϥΤ�/��/�~���榡�^�Ǥ���r��
    string toDDDYYYYString() const{
    	string a;
    	int b=day;
    	int c[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    	for(int i=0;i<month-1;i++){
    		b+=c[i];
		}
    	a+=b;
		a+=year;
		return a;
	} // �ϥ� DDD YYYY ���榡�^�Ǥ���r��
    string toMonthDDYYString() const{
    	string a;
    	a+=month;
		a+=day;
		a+=",";
		a+=year;
		return a;
	} // �ϥ� ��� ��, �~ ���榡�^�Ǥ���r��

    ~Date(); // ���ѥH�T�{���󪺾P������

private:
    unsigned int month; // 1-12 (�@��ܤQ�G��)
    unsigned int day; // 1-31�A�̷Ӥ���өw
    unsigned int year; // ���N�~��

    // �ˬd�S�w����M�~���U�A����O�_�X�k���u��禡
    unsigned int checkDay(int) const{
    	
	}
};
int main(){
	Date a();
	cout<<a.toString();
}
#endif
