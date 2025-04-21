#include <iostream>
using namespace std;

template <typename T>
class Calculator{
    T a,b;
    public:
        Calculator(T x, T y){
            a = x;
            b = y;
        }
        T findmax(){
        	if(a > b){
        		return a;
			}
			else{
				return b;
			}
		}
        T add(){
            return a+b;
        }
        T sub(){
        	return a-b;
		}
		T multiply(){
			return a*b;
		}
		T division(){
			if(b!=0){
			  return a/b;	
			}
			return 0;
		}
};
int main() {
    Calculator<int> c1(4,5);
    cout<<"Max :"<<c1.findmax()<<endl;
    cout<<"Addition :"<<c1.add()<<endl;
    
    Calculator<int> c2(10,5);
    cout<<"Subtraction :"<<c2.sub()<<endl;
    
    Calculator<float> c3(3.0,4.0);
    cout<<"Multipication:"<<c3.multiply()<<endl;
    
    Calculator<float> c4(6.0,2.0);
    cout<<"division:"<<c4.division()<<endl;

    return 0;
}
