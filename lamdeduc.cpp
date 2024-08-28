#include<iostream>
using namespace std;
int main()
{
    //function defination
    auto add = [](int x, int y){
        return x+y;//inline compuatation
    };
   //function call
   cout<<add(3,4)<<endl;
    return 0;
}