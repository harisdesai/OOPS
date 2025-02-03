#include <iostream>
using namespace std;

class Demo{
	private:
		int* p;
		
	public:
		Demo(){
			p=new int(1);
			cout<<"constructor is called"<<endl;
		}
		
		void setDemo(int v){
			*p=v; 
		}
		
		void getDemo(){
			cout<<"value : "<<*p<<endl;
		}
		
		Demo(const Demo &obj){
			cout<<"Copy constructor is called"<<endl;
			p=obj.p;
		}
		
		~Demo(){
			cout<<"Destructor is called"<<endl;
		}
};
int main(){
	Demo d1;
	d1.setDemo(10);
	d1.getDemo();
	Demo d2=d1;
	d2.setDemo(9);
	d2.getDemo();
}
