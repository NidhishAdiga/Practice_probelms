#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> v1 ={1,2,3,4,5};
   vector<int> :: iterator i1;
   for(i1 =v1.begin();i1!=v1.end();++i1){
    *i1 = 1;//write only assigment
    cout <<(*i1) << " ";
   }
    return 0;
}