#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//deque
int display(deque<int>d){
    deque<int>::iterator it;
    for(it=d.begin();it!=d.end();++it){
        cout << " " << *it;
        cout <<'\n';
    }
    return 0;
}
int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(15);
    display(dq);
    cout<<dq.size()<<endl;
    cout<<"max size of queue"<<dq.max_size()<<endl;
    cout<<"value at 2nd pos "<<dq.at(2)<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    dq.pop_back();
    display(dq);
    dq.pop_front();
    display(dq);
    
    cout<<dq.size()<<endl;
    //resize function
    dq.resize(5,100);//(size of the que,elemnts are 100)
    for(int i : dq){
        cout << i <<" ";
    }
    cout<<dq.size()<<endl;
    //random insert 
    dq.insert(dq.begin()+1,15);//after first index it adds the elemnts
    cout<<dq[1]<<endl;
    display(dq);
    //random erase
    dq.erase(dq.begin()+1);
    cout<<dq[1]<<endl;
    cout<<"elements after erase"<<endl;
    display(dq);
    //clear the dqueue
    dq.clear();
    if(dq.empty()){
        cout<<"dqeue is empty"<<endl;
    }
    return 0;
}