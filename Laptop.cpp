#include <iostream>
#include <string.h>
using namespace std;

class Laptop{
	private:
		string brand;
		string model;
		int price;
		
	public:
		Laptop(){
			brand='\0';
			model='\0';
			price=0;
			
			cout<<"constructor is called"<<endl;
		}
		
		void setInfo(){
			string bn, m;
			int p;
			cout<<"Enter brand name"<<endl;
			cin>>bn;
			cout<<"Enter model"<<endl;
			cin>>m;
			cout<<"Enter price"<<endl;
			cin>>p;
			
			brand=bn;
			model=m;
			price=p; 
		}
		void getInfo(){
			cout<<"Brand name is: "<<brand<<endl;
			cout<<"Model of laptop is: "<<model<<endl;
			cout<<"Price: "<<price<<endl;
		}
		
		Laptop(const Laptop &obj){
			cout<<"Copy constructor is called"<<endl;
			brand=obj.brand;
			model=obj.model;
			price=obj.price;
		}
		
		~Laptop(){
			cout<<"Destructor is called"<<endl;
		}
};
int main(){
	Laptop l1;
	Laptop l2=l1;
	l1.setInfo();
	l1.getInfo();
	l2.setInfo();
	l2.getInfo();
}
