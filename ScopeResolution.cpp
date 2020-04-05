#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;int breadth;
public:
    int area()
    {
        return length*breadth;

    }
    int perimeter();

};
int Rectangle:: perimeter()
{

    return 2*(length+breadth);
}
void main()
{

    Rectangle r;
    r.length = 90;
    r.breadth = 90;
    cout<<r.area();
    cout<<r.perimeter();
}
