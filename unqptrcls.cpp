#include<iostream>
#include<bits/stdc++.h>
#include<memory>
using namespace std;
class MyClass{
    public :
    MyClass(){
        cout<<"constructor called"<<endl;
    }
    ~MyClass(){
        cout<<"destructor called"<<endl;
    }
    void display() const
{
    cout<<"display MyClass"<<endl;
}
};
int main()
{
    unique_ptr<MyClass>ptr1 = make_unique<MyClass>();
    ptr1->display();
    //transfer ownership
    unique_ptr<MyClass>ptr2 = move(ptr1);
    //ptr is empty,ptr2 has ownership
    //if ptr1 is empty-display empty
    if(!ptr1){
        cout<<"empty"<<endl;
    }
    if(ptr2){
        ptr2->display();
    }
    return 0;
}
