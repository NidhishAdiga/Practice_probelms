#include<iostream>
using namespace std;
int main()
{
int x=10;
auto func = [x](int y){
   return x+y;
};//lambda function def ends with a semicolon
cout<<func(5)<<endl;//invoke the function
return 0;
}