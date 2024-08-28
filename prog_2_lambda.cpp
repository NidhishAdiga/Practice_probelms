#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//lambdas with functions with captures
int main()
{
   vector<int> num ={1,2,3,4,5,7};
    int multipler = 2;
    //cpature multiplier by valur and multiply each elemnt
    for_each(num.begin(),num.end(),[multipler](int &n){
         n*=multipler;
    });
    cout<<"multiplied values are"<<endl;
    for(int n :num){
        cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}