#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string dept;

        void dis(){
            cout<<id<<" "<<dept<<endl;
        }
};

int main()
{
    Student robert;
    robert.id = 101;
    robert.dept = "CSE";
    robert.dis();

    Student john;
    john.id = 202;
    john.dept = "EEE";
    john.dis();
}