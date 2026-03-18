#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<int> l;

    // insert 10 values
    for(int i=0;i<10;i++)
        l.push_back(rand()%100);

    // reverse display
    for(auto it=l.rbegin(); it!=l.rend(); it++)
        cout<<*it<<" ";
    cout<<endl;

    // add 5
    for(auto it=l.begin(); it!=l.end(); it++)
        *it += 5;

    // const iterator
    for(auto it=l.cbegin(); it!=l.cend(); it++)
        cout<<*it<<" ";
    cout<<endl;

    // sort
    l.sort();

    // display
    for(auto x:l)
        cout<<x<<" ";
}