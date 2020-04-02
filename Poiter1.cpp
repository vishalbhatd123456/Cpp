#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p; //declaration of a pointer
    //2. Inititalix=zation of a pointer
    p =&x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    //3. Dereferencing
    cout<<*p;
    int *q = new int[5];
    q[0] = 12;
    q[1] = 98;
    cout<<q[1]<<endl;

    delete [] q;
    q = nullptr;



}
