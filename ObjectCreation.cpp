#include<iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return (length*breadth);
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r;
    Rectangle *p;
    p = &r;
    r.length = 10;
    p->length = 10;
    p->breadth = 5;
    cout<<p->area()<<endl;
    //create an object in heap
    Rectangle *p1;
    p1 = new Rectangle;
    //Rectangle *q = new Rectangle;
    p1->length = 90;
    p1->breadth = 90;
    cout<<p1 ->area()<<endl;


}
