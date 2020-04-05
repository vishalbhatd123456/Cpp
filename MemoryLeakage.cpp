//WARNING : MEMORY LEAK PROGRAM --------------DO NOT EXECUTE THIS PROGRAM------------------------
#include<iostream>
using namespace std;
class A{
public:
    void fun()
    {
        int *p = new int[5];
        while(1)
        {
            fun();
        }
    }

};
int main()
{

    A a;
    a.fun();
}
