#include<iostream>
using namespace std;

class Shape{
    public:
        double dim1, dim2;

        Shape(double dim1, double dim2){
            this -> dim1 = dim1;
            this -> dim2 = dim2;
        }

        double area(){
            return 0;
        }
};

class Triangle : public Shape{
    public:
        Triangle(double dim1, double dim2)
        : Shape(dim1, dim2){

        }

        double area(){
            return 0.5 * dim1 * dim2;
        }
};

class Rectangle : public Shape{
    public:
        Rectangle(double dim1, double dim2)
        : Shape(dim1, dim2){

        }

        double area(){
            return dim1 * dim2;
        }
};

int main()
{
    Triangle t(10, 20);
    cout<<t.area()<<endl;

    Rectangle r(10, 20);
    cout<<r.area()<<endl;
}