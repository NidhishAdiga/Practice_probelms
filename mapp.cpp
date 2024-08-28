#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    map<int,string> mp;
    mp[1] ="one";
    //insert function
    mp.insert(pair<int,string>(2,"two"));
    mp[3] = "three";
    mp[4] = "four";
    //erase - remove an elemnt
    mp.erase(2);
    cout << mp.size() << endl;
    //acess elemnts
    cout << mp[3] <<endl;//key=3 op = three
    //find function
    if(mp.find(3)!=mp.end()){
        cout<<"elemnt presnt"<<endl;
    }
    else
    cout<<"elemnet not presnt"<<endl;
    //acess using iterators
    for(auto i = mp.begin();i!=mp.end();++i){
        cout<<"key:"<<i->first<<" "<<i->second;
    }
    for(const auto &pair:mp){
        cout<<pair.first<<" "<<pair.second;
    }
    return 0;
}