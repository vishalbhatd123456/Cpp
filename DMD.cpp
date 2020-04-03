#include<iostream>
using namespace std;
class Base{
    public : void f1();
    void f2();
    void f3();
    };

class Derived :public Base{
    public : void f4();
    void f5();
};

int main(){
    Base *b1;
    b1 = new Deriverd();
    b1.f1();
    b1.f2();
    b1.f3();
    //Derived *d1;
    // d1 = new Base();
}
