#include<iostream>
using namespace std;
class Base{
public:
    Base()
    {

        cout<<"Default Const of base"<<endl;
    }
    Base(int x)
    {
        cout<<"Param of base"<<endl;
    }
};
 class  Derived : public Base{
public:
    Derived()
    {
        cout<<"Default of the derived:"<<endl;
    }
    Derived(int x)
    {
        cout<<"Param of the derived"<<endl;

    }
    Derived(int x,int a) : Base(x)
    {
        cout<<"param of derived";
    }
};
int main()
{
    //create object of derived calss
    Derived d;
    Derived d1(20,10);



}
