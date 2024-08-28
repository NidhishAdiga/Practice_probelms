#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> lst1 ={1,2,3,4};//itiliastion
    //add elemnts
    lst1.push_back(100);//1,2,3,4,100
    lst1.push_back(200);//1,2,3,4,100,200
    lst1.push_front(10);//10,1,2,3,4,100,200
    lst1.push_front(-20);//-20,10,1,2,3,4,100,200
    cout << lst1.size()<<endl;//8
    for(int i :lst1){
        cout << i<<" "<<endl;;
    }
    //delete elemts
    lst1.pop_back();//-20,10,1,2,3,4,100
    lst1.pop_front();//10,1,2,3,4,100
    cout <<lst1.size()<<endl;
    //iterator display
    for(auto j=lst1.begin();j!=lst1.end();++j){
        cout<<*j<<endl;
    }
    return 0;
}