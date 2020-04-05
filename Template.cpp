#include<iostream>
#include<list>
#include<iterator>
using namespace std;

//print the elements in the list
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it!= g.end(); ++it)
            cout<<'\t'<<*it;
    cout<<'\n';
}

int main()
{
    list<int> gqlist1, gqlist2;
    for(int i=0;i<10;i++)
    {
        gqlist1.push_back(i*2);
        gqlist2.push_front(i*3);
    }
    cout<<"\nList 1. (gqlist1) is :"; showlist(gqlist1);
    cout<<"\n List2 (gqlist2) is:";showlist(gqlist1);
    cout<<"\n gqlist 1. front():"<<gqlist1.front();
    cout<<"\n. gqlist1. back():"<<gqlist1.back();
    //cout<<"\n gqlist. pop_front():"<<gqlist1.pop_front();


}
