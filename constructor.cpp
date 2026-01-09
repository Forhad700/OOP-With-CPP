#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string dept;

        Student(int x, string y){
            id = x;
            dept = y;
        }

        void dis(){
            cout<<id<<" "<<dept<<endl;
        }
};

int main()
{
    Student robert(101, "CSE");
    robert.dis();

    Student john(202, "EEE");
    john.dis();
}