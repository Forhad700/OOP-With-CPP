#include<iostream>
using namespace std;

class Person{
    private:
        int id = 101;
        string name = "Forhad Hosen";

    friend class Student;
};

class Student{
    public:
        void dis(Person obj){
            cout<<obj.id<<endl;
            cout<<obj.name<<endl;
        }
};

int main()
{
    Person p;
    Student s;
    s.dis(p);
}