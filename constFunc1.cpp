#include<iostream>
using namespace std;
class Demo{
public:
    int x = 20;
    int y = 10;
    void display() const{
        x++;
        cout<<x<<"  "<<y<<endl;
    }
};
int main()
{
    Demo d;
    d.display();

}
