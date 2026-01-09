#include<iostream>
using namespace std;

class Student{
    public:
        const int id;
        const int courseFee;

        Student(int x, int y)
        : id(x), courseFee(y){
            cout<<id<<" "<<courseFee;
        }
};

int main()
{
    Student robert(101, 5000);
}