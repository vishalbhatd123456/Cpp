#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    static int addNo;
    Student(string n)
    {

        addNo++;
        roll = addNo;
        name = n;
    }
    void display()
    {
        cout<<"Name"<<name<<endl<<"Roll"<<roll<<endl;
    }
};
int Student :: addNo = 0;

int main()
{
    Student s1("John");
    Student s2("Ravi");
    Student s3("Khan");

    s1.display();
    //s6.display();

}
