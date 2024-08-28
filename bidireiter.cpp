#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int> v1 ={1,2,3,4,5};
   list<int> :: iterator i1;
   for(i1 =v1.begin();i1!=v1.end();++i1){
    *i1 = 1;//assigmnet output ietrator
   }
   for(i1 =v1.begin();i1!=v1.end();++i1){
    cout <<(*i1)<<" ";//acessing input iterator
   }
   list<int> v2 ={1,2,3,4,5};
   list<int> :: iterator i2;
    for(i2 =v2.end();i2!=v2.begin();--i1){
        //if(v2.end() != nullptr){
    cout <<(*i2) << " ";
    //}
   }
   cout << (*i2);

    return 0;
}