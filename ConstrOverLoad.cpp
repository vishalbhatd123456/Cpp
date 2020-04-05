#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle()
    {
        length =0 ; breadth = 0;
    }
    Rectangle(int l,int b)
    {
        length = l;
        breadth = b;
    }
    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
    }

};
int main()
{

    Rectangle r();
    r(12,34);
    Rectangle r2 (r);
}
