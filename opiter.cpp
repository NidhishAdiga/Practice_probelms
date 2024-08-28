#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
//beign and end operations
int main()
{
    vector<int> v = {10,20,30,40};//container
    //declare the iterator to the vector
    vector<int>::iterator it;
    for(auto i=v.begin();i<v.end();i++){
        cout << *i <<" ";
    }

    return 0;
}