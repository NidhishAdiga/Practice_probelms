#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
//"banglore":"karnataka","katmandu":"nepal","kochi":"kerala"
int main()
{ 
    map<string,string> mp;
     mp.insert(pair<string,string>("banglore","kranataka"));
    //insert function
    mp.insert(pair<string,string>("katmandu","nepal"));
    mp.insert(pair<string,string>("kochi","kerala"));
    //erase - remove an elemnt
    
    for(auto i = mp.begin();i!=mp.end();++i){
        cout<<"key:"<<i->first<<" "<<"value:"<<i->second;
    }
    return 0;
}