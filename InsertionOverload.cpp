#include<iostream>
using namespace std;
class Complex{
public:
    int real;
    int img;
    Complex(int r=0,int i=0)
    {
        real = r;
        img = i;
    }
friend ostream & operator<<(ostream &out, Complex &c);
};
ostream & operator<<(ostream &out, Complex &c)
{
    out<<c.real<<"+i"<<c.img<<endl;
    return out;
}
int main()
{
    Complex c1(10,90);
    cout<<c1<<endl;

}

