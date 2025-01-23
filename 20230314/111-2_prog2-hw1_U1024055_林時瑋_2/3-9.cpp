/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230314

3.9 (Modified Account Class) Modify class Account (Fig. 3.8) to provide a member function
called withdraw that withdraws money from an Account. Ensure that the withdrawal amount does
not exceed the Account’s balance. If it does, the balance should be left unchanged and the member
function should display a message indicating "Withdrawal amount exceeded account balance."
Modify class AccountTest (Fig. 3.9) to test member function withdraw.
*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Account {
	private:
		string name;
		int balance=0;
		
	public:
//		Account(string accountName){
//			name=accountName;
//			balance=0;
//		}
		Account(string accountName,int initialBalance)
		: name{accountName}{
//			name=accountName;
			if (initialBalance > 0) {
				balance = initialBalance;
			} 
		}
		void deposit(int depositAmount) {
			if (depositAmount > 0) {
				balance = balance + depositAmount;
			}
		} 
		int getBalance() const {
		 	return balance;
		}
		void setName(string accountName) {
			name = accountName;
		}
		string getName() const {
			return name;
		}
		void withdraw(int a){
			if(a>balance){
				cout<<"Withdrawal amount exceeded account balance."<<endl;
			}
			else{
				balance=balance-a;
				cout<<"餘額:"<<balance<<endl;
			}
		}
		
};

int main(){
	Account account1{"Jane Green",19};
	Account account2{"John Blue",26};
	cout << "account1 name is: " << account1.getName() << endl;
	cout << "account2 name is: " << account2.getName() << endl;
	account1.withdraw(20);
	account2.withdraw(20);
}
