#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
//advance 
//beign and end operations
int main()
{
    vector<int> v = {10,20,30,40};//container
    //declare the iterator to the vector
    vector<int>::iterator i=v.begin();
    advance(i,3);//point to 40 so index is 3
    // for(auto i=v.begin();i<v.end();i++){
    //     cout << *i <<" ";
    // }
    cout << *i;
    return 0;
}