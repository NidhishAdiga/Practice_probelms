#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
//next and prev
//beign and end operations
int main()
{
    vector<int> v = {10,20,30,40,50,60};//container
    //declare the iterator to the vector
    vector<int>::iterator nt = v.begin();
    vector<int>::iterator pr= v.end();
    auto it =next(nt,4);//pointing to 50
    auto it1 = prev(pr,3);//pointing to 40
    cout << *it<<" "<<*it1;

    return 0;
}