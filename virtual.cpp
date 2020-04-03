#include<iostream>
using namespace std;
class Parent{
public:
    void  display()
    {

        cout<<"Parent display()"<<endl;
    }
};
class Child : public Parent{
public:
    void virtual  display()
    {

        cout<<"Diplay() of the child"<<endl;
    }
};

class Child1 : public Child{
    void display(){
    cout<<"Display of the child1:"<<endl;}
};

int main()
{
   Child *c = new Child1();
   c->display();

}
