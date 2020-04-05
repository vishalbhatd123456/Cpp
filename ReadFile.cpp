#include<iostream>
#include<fstream>
using namespace std;
using namespace std;
int main()
{
   ifstream infile;
   infile.open("MyText.txt");
   //ios::in
   //ios::out
   if(!infile)
    cout<<"File cannot be opened"<<endl;
   string str;
   int x;
   infile>>str;
   infile>>x;
   cout<<str<<endl;
   //cout<<x;
   if(infile.eof())
    cout<<"Reached end of file"<<endl;
   infile.close();
}
