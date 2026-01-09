#include<iostream>
using namespace std;

class Student{
    public:
        string name;

        Student(string name){
            this -> name = name;
        }

        void dis(){
            cout<<name<<endl;
        }
};

int main()
{
    Student s1("Forhad Hosen");
    s1.dis();
}