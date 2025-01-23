/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230314


3.10 (Invoice class) Create a class called Invoice that a hardware store might use to represent an
invoice for an item sold at the store. An Invoice should include six data members-a part number
(type string), a part description (type string), a quantity of the item being purchased (type int),
a price per item (type int) a value-added tax (VAT) rate as a decimal (type double) and a discount
rate as a decimal(type double). Your class should have a constructor that initializes the six data
members. The constructor should initialize the first four data members with values from parameters and the last two data members to default values of 0.20 per cent and zero respectively. Provide
a set and a get functions for each data member. In addition, provide a member function named
getInvoiceAmount that calculates the invoice amount (i.e., multiplies the quantity by the price per
item and applies the tax and discount amounts), then returns the amount. Have the set data members perform validity checks on their parameters—if a parameter value is not positive, it should be
left unchanged. Write a driver program to demonstrate Invoice’s capabilities.

*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Invoice {
	private:
		string number;//編號 
		string description;//描述 
		int purchased;//數量 
		int item;//價格 
		double rate;//稅率 
		double discount;//折扣 
	public:
		Invoice(){
			number="";
			description="";
			purchased=0;
			item=0;
			rate=0.002;
			discount=0;
		}
		Invoice(string a,string b,int c,int d){
			number=a;
			description=b;
			purchased=c;
			item=d;
			rate=0.002;
			discount=0;
		}
		void setnumber(string a){
			number=a;
		}
		string getnumber(){
			return number;
		}
		void setdescription(string a){
			description=a;
		}
		string getdescription(){
			return description;
		}
		void setpurchased(int a){
			purchased=a;
		}
		int getpurchased(){
			return purchased;
		}
		void setitem(int a){
			item=a;
		}
		int getitem(){
			return item;
		}
		double getInvoiceAmount(){
			return purchased*item*(1.0+rate)-(purchased*item*discount);
		}
		
};

int main(){
	int a1,a2;
	cin>>a1>>a2;
	Invoice a("","",a1,a2);
	cout<<a.getInvoiceAmount()<<endl;
}
