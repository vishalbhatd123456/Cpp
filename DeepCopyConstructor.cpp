#include<iostream>
using namespace std;
class test{
    int a;
    int *p;
    test(int x)
    {
        a = x;
        p = new int[a];

    }
    test(test &t2)
    {
        a = t2.a;
        // p = t2.p
        p = new int[a];
    }
};
int main()
{
    test t(9);
    test t1(t);

}
