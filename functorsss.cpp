#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //craete the objects
    equal_to<int> eq;
    not_equal_to<int> neq;
    greater<int> gt;
    less<int> ls;
    plus<int> p; // a=20;b=90;c=a+b
    minus<int> m;
    cout<<boolalpha;
    cout<<eq(10,20)<<endl;//0
    cout<<neq(10,20)<<endl;//1
    cout<<gt(10,20)<<endl;//0
    cout<<ls(10,20)<<endl;//1
    cout<<p(10,20)<<endl;//30
    cout<<m(10,20)<<endl;//-10
    return 0;
}