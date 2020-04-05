#include<iostream>
using namespace std;
class Test{
    public :
        int a;
        int b;
    Test(int x, int y)
    {
        a = x;
        b= y;
    }
    Test() : Test(1,1)
    {
        //delegating the constructors


    }
};
