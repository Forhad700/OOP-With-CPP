#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string dept;

        void setValue(int x, string y){
            id = x;
            dept = y;
        }

        void dis(){
            cout<<id<<" "<<dept<<endl;
        }
};

int main()
{
    Student robert;
    robert.setValue(101, "CSE");
    robert.dis();

    Student john;
    john.setValue(202, "EEE");
    john.dis();
}