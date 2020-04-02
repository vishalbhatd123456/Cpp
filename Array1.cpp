#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int A[3];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<3;i++)
    cin>>A[i];
    cout<<"The elements of the array are:"<<endl;
    for(auto x:A)
        cout<<x;
    //modify the arry elements using the reference & symbol
    for(auto &x:A)
        cout<<x*x<<endl;

    for(int i=0;i<3;i++)
        cout<<A[i]<<"  ";
    return 0;


}
