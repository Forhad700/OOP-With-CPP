#include "myfirstclass.h"
#include<iostream>
using namespace std;

MyFirstClass::MyFirstClass(){
    cout<<"constructor called"<<endl;
}

MyFirstClass::~MyFirstClass(){
    cout<<"destructor called"<<endl;
}

void MyFirstClass::dis(){
    cout<<"dis function called"<<endl;
}