#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string dept;

        // parameterized constructor
        Student(int x, string y){
            id = x;
            dept = y;
        }

        // default constructor
        Student(){
            cout<<"Parameterized constructor"<<endl;
        }

        void dis(){
            cout<<id<<" "<<dept<<endl;
        }
};

int main()
{
    Student robert(101, "CSE");      // parameterized constructor called
    robert.dis();

    Student john;                   // default constructor called
}