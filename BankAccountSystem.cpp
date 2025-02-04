#include <iostream>
#include <string.h>
using namespace std;

class Bank{
    private:
        string accountHolder;
        int accountNumber;
        string accountType;
        double balance;
        
    public:
        //default constructor
        Bank(){
            accountHolder="Haris Desai";
            accountNumber=123456789;
            accountType="savings";
            balance=1000;
        }
        
        //parameterised constructor
        Bank(string aH, int aN, string aT, double b){
            accountHolder=aH;
            accountNumber=aN;
            accountType=aT;
            balance=b;
        }
        
        void getAccountHolder(){
            cout<<"Account Holder : "<<accountHolder<<endl;
        }
        
        void getAccountNumber(){
            cout<<"Account Number : "<<accountNumber<<endl;
        }
        
        void getAccountType(){
            cout<<"Account Type : "<<accountType<<endl;
        }
        
        void getBalance(){
            cout<<"Balance : "<<balance<<endl;
        }
        
        void setAccountType(string x){
            accountType=x;
            cout<<"\nupdated Account Type to current "<<endl;
        }
        
        void setDeposit(){
            int damount;
            cout<<"\nEnter amount to deposit : "<<endl;
            cin>>damount;
            balance=balance+damount;
            cout<<"Deposited : "<<damount<<endl;
            cout<<"New balance is : "<<balance<<endl;
        }
        
        void setWithdrawl(){
            int wamount;
            cout<<"\nEnter amount to withdraw : "<<endl;
            cin>>wamount;
            balance=balance-wamount;
            cout<<"Deposited : "<<wamount<<endl;
            cout<<"New balance is : "<<balance<<endl;
        }
        
        //get all details
        void getDisplayAccountDetails(){
            cout<<"\nFinal Account Details : "<<endl;
            getAccountHolder();
            getAccountNumber();
            getAccountType();
            getBalance();
        }
};

int main() {
    Bank b1;
    Bank b2("sahil",1356802468,"current",20000);//parameterised constructor
    b1.getAccountHolder();
    b1.getAccountNumber();
    b1.getAccountType();
    b1.getBalance();
    b1.setDeposit();
    b1.setWithdrawl();
    b1.setAccountType("current");
    b1.getDisplayAccountDetails();
    cout<<"\n"<<endl;
    b2.getAccountHolder();
    b2.getAccountNumber();
    b2.getAccountType();
    b2.getBalance();
    return 0;
}
