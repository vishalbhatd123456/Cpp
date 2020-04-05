#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("MyText.txt",ios::trunc); //pipe creation
    outfile<<"Hello";
    outfile<<25<<endl;
    outfile.close();
}
