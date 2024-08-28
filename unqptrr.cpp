#include <iostream>
#include<memory> //
using namespace std;
void display(unique_ptr<int>& ptr) 
{
    if (ptr) 
    {
cout << "Value: " << *ptr <<endl;
    } 
    else 
    {
cout << "Pointer is null." <<endl;
    }
}
int main() 
{
    // Creating a unique_ptr and initializing it with a new integer
    unique_ptr<int> ptr1(new int(10));

    display(ptr1); // Output: Value: 10

    // Transfer ownership using std::move
unique_ptr<int> ptr2 = move(ptr1);

    display(ptr1);
    display(ptr2); // Output: Pointer is
    *ptr2 = 20;
    display(ptr2);
    display(ptr1);
    return 0;
}