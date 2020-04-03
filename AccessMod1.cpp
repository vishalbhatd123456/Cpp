#include<iostream>
using namespace std;
class base{
    private: int a;
    public: int b;
    protected: int c;
    void funBase()
    {
        a=10; b- 20; c =30;
    }
};
class derived : base{
    void funDerived()
    {
        a = 34;
        b= 98;
        c=00;
    }
};

int main()
{
    base x;
    x.a = 22;
    x.b=22;
    x.c=22;

}
