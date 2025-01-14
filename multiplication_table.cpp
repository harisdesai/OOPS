#include<iostream>
using namespace std;

int main() 
{
    int i,number;
    
    cout<<"Enter a number: ";
    cin>>number;
    
    cout<<"Multiplication table of "<<number<<" is:";
    
    for(i=1;i<=10;i++) 
	{
        cout<<number<<"x"<<i<<"="<<number*i<<endl;
    }
}

