#include<iostream>
#include<bits/stdc++.h>
//priority queue
using namespace std;
int main()
{
    int arr[6]={10,2,4,8,6,9};
    //initialisation of prority qeue
    priority_queue<int>pq;
    //print the array
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    //push the array sequentialy
    for(int i =0; i<6;i++){
         pq.push(arr[i]);
    }
    //print priority queue
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}