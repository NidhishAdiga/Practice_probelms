#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//stack container time compeaxity O(n) ansd space compelxity O(n)
//recursion uses stack
int main()
{
    stack<int> st;//initialsation
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    int num =100;
    st.push(num);//passing argument
    st.pop();//100 gets poped first lifo principle
    st.pop();//40 is removed
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}