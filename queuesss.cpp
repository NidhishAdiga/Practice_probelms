#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//queue empty function time compexity is O(1) and size fction size complexity is O(1)
int display(queue<int>q2){
    queue<int>q3=q2;
    while (!q3.empty())
    {
        cout <<"\t"<<q3.front()<<endl;
        q3.pop();
    }
    return 0;
 }
int main()
{
    queue<int>q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    cout << "elements:"<<display(q1)<<endl;
    cout << q1.size()<<endl;
    cout << q1.front()<<endl;
    cout<<q1.back()<<endl;
    q1.pop();//10 will be removed
    cout << q1.size()<<endl;
    cout << q1.front()<<endl;
    return 0;
}