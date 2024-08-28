#include <iostream>
#include <vector>
using namespace std;

int main() 
{
vector<int> vec = {1, 2, 3, 4};

vec.push_back(5); //add at end//{1,2,3,4,5}
vec.push_back(6); //{1,2,3,4,5,6}
    
vec.pop_back(); // Remove the last element
//{1,2,3,4,5}
cout <<vec.size() << endl;
//5
// Access elements by index using []
cout <<vec[2] << endl;
//3
//iteration
for (auto i = vec.begin(); i != vec.end(); ++i) 
{
        cout << "begin"<<*i << "\t"<<endl;
}
return 0;
}