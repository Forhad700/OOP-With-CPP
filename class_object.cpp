#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string dept;
};

int main()
{
    Student robert;
    robert.id = 101;
    robert.dept = "CSE";

    cout<<robert.id<<" "<<robert.dept;
}