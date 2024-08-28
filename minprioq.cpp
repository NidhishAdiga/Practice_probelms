#include<iostream>
#include<bits/stdc++.h>
//priority queue
using namespace std;
void showArray(int *arr,int n){
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void disp_priority(priority_queue<int,vector<int>,greater<int>> g){
    while(!g.empty()){
        cout << g.top() <<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[6]={10,2,4,8,6,9};
    //initialisation of prority qeue
    priority_queue<int,vector<int>,greater<int>>gquiz(arr,arr+6);
    //print the array
    cout << showArray(arr,6);
    disp_priority(gquiz);
    
    return 0;
}