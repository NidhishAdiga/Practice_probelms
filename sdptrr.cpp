#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//p1 and p2 are pointing to the object 
//and maintaining refernce of object
class Rectangle{
    int length , breadth;
    public:
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    int area(){
        return length*breadth;
    }
};
int main()
{
    shared_ptr<Rectangle>p1(new Rectangle(10,5));
    cout <<p1->area()<<endl;//50
    shared_ptr<Rectangle>p2;
    shared_ptr<Rectangle>p3;
    p2=p1;
    p3=p1;
    cout<<p2->area()<<endl;//50
    cout<<p1->area()<<endl;//50
    cout<<p1.use_count()<<endl;//2
    return 0;
}