#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;//initialsation
    st.push(10);
    st.push(12);
    st.push(35);
    st.pop();
    st.pop();
    st.push(20);
    st.push(11);
    st.push(40);
    st.pop();//100 gets poped first lifo principle
    st.push(2);
    st.push(16);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}