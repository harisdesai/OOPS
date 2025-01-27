// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Ball{
    private:
        int diameter;
        float radius;
        float volume;
        string type;
        
    public:
        Ball(){
            diameter=100;
            radius=diameter/2;
            volume=1.33*3.14*radius*radius*radius;
            type="football";
        }
        
        Ball(int x){
            diameter=x;
            radius=diameter/2;
            volume=1.33*3.14*radius*radius*radius;
            type="basketball";
        }
        
        ~Ball(){
            cout<<"\nDestructor is called"<<endl;
        }
    
        void getBallInfo(){
            cout<<"\nThe diameter of ball is : " <<diameter<<endl;
            cout<<"The volume of ball is : " <<volume<<endl;
            cout<<"The type of ball is : " <<type<<endl;
        }
        void setBallInfo(int dia){
            diameter=dia;
            radius=diameter/2;
            volume=1.33*3.14*radius*radius*radius;
            type="volleyball";
        }
};

int main() {
    Ball b1;
    Ball b2(40);
    b2.getBallInfo();
    b1.getBallInfo();
    b1.setBallInfo(20);
    b1.getBallInfo();
    return 0;
}
