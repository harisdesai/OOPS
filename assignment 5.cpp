#include <iostream>
#include <string>
using namespace std;
class Bank{
	public:
		void deposit(int amt){
			cout<<"Depositing "<<amt<<" in cash"<<endl;
		}
		
		void deposit(double amt){
			cout<<"Depositing "<<amt<<" via digital payment"<<endl;
		}
		
		void deposit(string UPI_ID,float amt){
			cout<<"Depositing "<<amt<<"Rs "<<"Using UPI "<<UPI_ID<<endl;
		}	
};

class Account {
	private:
	    int accountNumber;
	    float balance;
	public:
		Account(int acc_no,float init_bal){
			accountNumber=acc_no;
			balance=init_bal;
		}
		
		void Display(){
			cout<<"Account No:"<<accountNumber<<endl;
			cout<<"Balance:"<<balance<<endl;
		}
		
		void operator+(Account &acc){
			float TransferAmt;
			cout<<"Enter the amount to transfer from Account"<<accountNumber<<"to Account"<<acc.accountNumber<<endl;
			cin>>TransferAmt;
			if(balance>=TransferAmt){
				balance=balance-TransferAmt;
				acc.balance=acc.balance+TransferAmt;
				cout<<"Transferring Rs "<<TransferAmt<<" From Account"<<accountNumber<<" To Account"<<acc.accountNumber<<endl;
				cout<<"New Account "<<accountNumber <<" Balance :"<< balance<<endl;
				cout<<"New Account "<<acc.accountNumber <<" Balance :"<< acc.balance<<endl;
			}
		}
		
		void operator-(float WithdrawAmt) {
			if(balance>=WithdrawAmt)
			{
				balance=balance-WithdrawAmt;
				cout<<"Withdrawing "<<WithdrawAmt<<" from account "<<accountNumber<<endl;
				cout<<"Remaining Balance : "<<balance<<endl;
			}	
	}
};

int main(){
	Bank b1;
	b1.deposit(5000);
	b1.deposit(1500.75);
	b1.deposit("gpay@upi",2500);
	
	Account a1(1,10000);
	Account a2(2,5000);
	
	a1+a2;
	a1-2000;
	
}
