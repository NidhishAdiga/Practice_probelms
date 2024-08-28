#include<iostream>
#include <vector>
using namespace std;

int main()
{
    //initialisation
    vector<int> vec= {1,2,3,4,5};
    vec.push_back(10);///1,2,3,4,10
    vec.push_back(20);//1,2,3,4,10,20
    vec.push_back(20);//1,2,3,4,10,20,30
    // cout <<vec.size() << endl; //8
    vec.pop_back();//1,2,3,4,10,20
    // cout <<vec.size() << endl;//7
    //iteration using for
    // for(int i : vec){
    //     cout << i<< endl;
    // }
    //iteration using iterator
    for(auto j=vec.begin();j!=vec.end();++j){
       cout << *j <<"\t"<<endl;
    }

    return 0;
}