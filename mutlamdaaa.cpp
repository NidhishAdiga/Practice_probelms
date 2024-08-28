#include<iostream>
using namespace std;
int main()
{
   int count=0;
   //lambda function defenition
   auto func = [&count]() mutable {
       count++;//1 then 2
       cout<<count<<endl;
   };
   //lamda function call
   func();//first call
   func();//second call
    return 0;
}