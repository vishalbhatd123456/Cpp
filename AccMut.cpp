#include<iostream>
using namespace std;
class Rectangle{
    private:
        int Length;
        int Breadth;
    public :
        void setLength(int l)
        {
                Length = l;
        }
        //accessors
        void setBreadth(int b){
            Breadth = b;
        }
        //mutatord
        int getLength()
        {
            return Length;

        }
        int getBreadth()
        {

            return Breadth
        }
};
int main()
{
    Rectangle r;
    r.setBreadth(23);
    r.setLength(34);

}
