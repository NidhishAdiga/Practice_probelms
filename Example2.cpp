#include<iostream>
#include <string>
using namespace std;

//template function

template <typename T>
T add(T a, T b)
{
   return a+b;
}
int main()
{
    int intRes = add(3,4);//function call
    cout<< intRes<< endl;
    //float operation
    float floatRes = add(3.5f,2.45f);
    cout << floatRes <<endl;
    //doble
    double res = add(3.55,3.6);
    cout << res <<endl;
    //strings
    string res1 = add(string("hello  "),string("nidhish"));
    cout << res1 << endl;
    return 0;
}