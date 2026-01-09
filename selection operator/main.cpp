#include<iostream>
#include "myfirstclass.h"
using namespace std;

int main()
{
    MyFirstClass obj;
    MyFirstClass *p = &obj;
    p -> dis();
}