#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//multiset dups allowed
int main()
{
    multiset<int>mset;
    mset.insert(10);
    mset.insert(20);
    mset.insert(10);//dup elemnt
    mset.insert(30);
    //display
    for(const int& element :mset){
        cout<<element<<" ";
    }
    cout<<endl;
    return 0;
}