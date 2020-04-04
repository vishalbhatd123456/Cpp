#include<iostream>
using namespace std;

void swap1(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x=10, y=20;
    swap1(&x,&y);
    cout<<x<<" "<<y<<endl;

}
