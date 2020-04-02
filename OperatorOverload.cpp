#include<iostream>
#include<stdio.h>
using namespace std;
class Complex{
public:
    int real;
    int img;
public:
    Complex(int r=0,int i=0)
    {
        real = r;
        img = i;
    }
    Complex add(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }


};
    int main()
{
    Complex c1(2,3);
    Complex c2(-1,2);
    Complex c3;
    c3 = c1.add(c2);
    cout<<c3.real<<"  "<<c3.img<<"  ";
    return 0;

}

