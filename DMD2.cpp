#include<iostream>
using namespace std;

class Rectangle{
public:
    void area()
    {
        cout<<"the area of a rectangle:"<<endl;
    }

    };
class Cuboid : public Rectangle{
        void volume()
        {

            cout<<"The volume of the cuboid"<<endl;
        }
};

int main()
{
    Cuboid c;
    Rectangle *r = &c;
    r->area();

}
