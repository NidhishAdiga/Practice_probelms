#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//lamdas with standrad algos
int main()
{
    vector<int> num ={3,4,1,5,6,1,9};
    //display squared o/p of elemnts
    vector<int> sq;
    transform(num.begin(),num.end(),back_inserter(sq),[] (int x){
        return x*x;
    });
    //print numbers
    cout<<"squared numbers"<<endl;
    for(int n : sq){
        cout<<n<<" ";
    }
    cout<<endl;
    //sorting
    sort(sq.begin(),sq.end(),[](int a, int b)
    {
        return a>b;
    });
    //print sorted numbers
    cout<<"sorted numbers"<<endl;
    for(int nq : sq){
        cout<<nq<<" ";
    }
    cout<<endl;
    return 0;
}