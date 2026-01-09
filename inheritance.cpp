#include<iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;

        void dis1(){
            cout<<name<<endl;
            cout<<age<<endl;
        }
};

class Student : public Person{
    public:
        int id;

        void dis2(){
            cout<<id<<endl;
            dis1();
        }
};

int main()
{
    Student s1;
    s1.name = "Forhad Hosen";
    s1.age = 29;
    s1.id = 1;
    s1.dis2();
}