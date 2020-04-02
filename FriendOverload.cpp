//overloading operators using friend functions
#include<stdio.h>
#include<iostream>
using namespace std;
class Complex{
    public :
            int real;
            int img;
            Complex(int r=0,int i=0)
            {
                real = r;
                img = i;
            }
    friend Complex operator+(Complex c1,Complex c2);
};
Complex operator+(Complex c1, Complex c2)
{
    Complex t;
    t.real = c1.real+c2.real;
    t.img = c1.img + c2.img;
    return t;
}
int main()
{
    Complex c1(3,5);
    Complex c2(3,4);
    Complex c3;
    c3 = c1 + c2;
    cout<<c3.real<<endl;
    cout<<c3.img<<endl;
    return 0;
}
