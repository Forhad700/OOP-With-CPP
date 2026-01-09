#include<iostream>
using namespace std;

class Person{
    public:
        virtual void dis() = 0;

        void call(){
            cout<<"Hello!"<<endl;
        }
};

class Student : public Person{
    public:
        void dis(){
            cout<<"Inside Student class"<<endl;
        }
};

class Teacher : public Person{
    public:
        void dis(){
            cout<<"Inside Teacher class"<<endl;
        }
};

int main()
{
    Person *p;

    Student s;
    p = &s;
    p -> dis();

    Teacher t;
    p = &t;
    p -> dis();
    p->call();
}