#include <iostream>
#include<string>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    
    public:
        Person(string n, int a){
            name=name;
            age=age;
        }
        
        virtual void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
        }
};

class Student : public Person{
    protected:
        int rollno;
        string branch;
        int marks;
        float cgpa;
        
    public:
        Student(string name, int age, int rollno, string branch, int marks) : Person(name,age) {
            rollno=rollno;
            branch=branch;
            marks=marks;
            cgpa=Calculate_cgpa(marks);
        }
        
        float Calculate_cgpa(int marks){
            return marks/9.5;
        }
        
        void display() override {
            Person::display();
            cout<<"Roll Number : "<<rollno<<endl;
            cout<<"Branch : "<<branch<<endl;
            cout<<"Marks : "<<marks<<endl;
            cout<<"CGPA : "<<cgpa<<endl;
        }
        
};

class Faculty : public Person{
    protected:
        int facultyid;
        string department;
        int salary;
    
    public:
        Faculty(string name, int age, int facultyid, string department, int salary):Person(name,age) {
            facultyid=facultyid;
            department=department;
            salary=salary;
        }
        
        void display() override{
            Person::display();
            cout<<"Faculty ID : "<<facultyid<<endl;
            cout<<"Department : "<<department<<endl;
            cout<<"Salary : "<<salary<<endl; 
        }
};

// Class TeachingAssistant : public Student , public Faculty{
    
// };

int main() {
    Student s1("Haris Desai", 20, 26, "CSE AIML", 80);
    Faculty f1("Dikshant", 45, 1234, "CSE", 120000);
    s1.display();
    f1.display();

    return 0;
}
