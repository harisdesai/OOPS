#include<iostream>
using namespace std;
int main() 
{
    int num1,num2,num3;
    
    cout<<"Enter Three numbers: ";
    cin>>num1>>num2>>num3;
    
    if(num1>=num2&&num1>=num3) 
	{
        if(num1==num2||num1==num3) 
		{
            cout<<"There is a tie for the largest number: "<<num1;
        } 
		else 
		{
            cout<<"The largest number is: "<<num1;
        }
    }
    else if(num2>=num1&&num2>=num3) 
	{
        if(num2==num3) 
		{
            cout<<"There is a tie for the largest number: "<<num2;
        } 
		else 
		{
            cout<<"The largest number is: "<<num2;
        }
    }
    else 
	{
        cout<<"The largest number is: "<<num3;
    }
}
