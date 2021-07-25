#include<iostream>

using namespace std;

class Employee{
    string name;
    static int id;

    public:
        void setEmployee(){
            id++;
            cout<<"Enter your name ";
            cin>>name;
        }
        void getEmployee(){
            cout<<"ID is "<<id<<endl<<"Name is "<<name<<endl;
        }
};

int Employee::id=0;

int main(){

    Employee e1,e2,e3;

    e1.setEmployee();
    e1.getEmployee();
    e2.setEmployee();
    e2.getEmployee();
    e3.setEmployee();
    e3.getEmployee();

    return 0;
}