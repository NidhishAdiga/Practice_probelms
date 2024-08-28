#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//multiset dups allowed
int main()
{
    multimap<int,string>m;
    m.insert({1,"cse"});
    m.insert({2,"ece"});
    m.insert({1,"eee"});//dup elemnt
    m.insert({3,"civil"});
    m.insert({2,"mech"});
    //display
    for(const auto &element :m){
        cout<<element.first<<":"<<element.second<<endl;
    }
    cout<<endl;
    return 0;
}