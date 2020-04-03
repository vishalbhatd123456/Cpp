#include<iostream>
using namespace std;

class Shape{
public:
    virtual void perimeter() = 0; //generalizaation
    virtual void area() = 0;

};

class Rectange : public Shape{
    public:
    int l;
    int b;
    Rectangle(int l1,int b1)
    {
        l = l1;
        b1 = b;
    }
    void perimeter()
    {
        cout<<"The perimeter is :"<<2*(l+b)<<endl;

    }
    void area()
    {
        cout<<"The area is :"<<(l*b)<<endl;

    }
};

class Circle : public Shape{
    public:
    int r;
    Circle(int r1)
    {
        r = r1;
    }
    void area()
    {

        cout<<"The area is :"<<3*r*r<<endl;
    }
    void perimeter()
    {

        cout<<"The perimeter is: "<<2*3*r<<endl;
    }

};

int main()
{

    Circle c(10);
    c.area();
    c.perimeter();

}
