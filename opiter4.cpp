#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
//next and prev
//beign and end operations
int main()
{
    vector<int> v = {10,20,30,40,50,60};//container
    vector<int> v1 = {1,2,3,4};
    vector<int>::iterator ptr = v.begin();
    advance(ptr,3);//40
    copy(v1.begin(),v1.end(),inserter(v,ptr));
    for(int  &x:v){
        cout << x<<" ";
    }

    return 0;
}