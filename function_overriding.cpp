#include<iostream>
using namespace std;

class Person{
    public:
        void dis(){
            cout<<"Inside Person class"<<endl;
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
    Student s1;
    s1.dis();

    Teacher t1;
    t1.dis();
}