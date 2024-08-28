#include<iostream>
#include<memory>
using namespace std;
int main()
{
    auto_ptr<int>p1(new int(10));
    //p1 owns int 10
    cout<<"p1 owns :"<<*p1<<endl;
    auto_ptr<int>p2(p1);
    //p2 owns int 10 now
    cout<<"p2 owns :"<<*p2<<endl;
    cout<<*p1<<endl;
    return 0;
}