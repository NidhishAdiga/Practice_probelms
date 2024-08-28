#include <iostream> //cin(), cout(), getchar(),clrscr()
#include <string>
using namespace std; //:: - scope resolution operator
// Template function definition
template <typename T>
T add(T a, T b) 
{
    return a + b;  //7, 5.6777, 
}

int main() {
    // Test the function with integers
    int intResult = add(3, 4);
    cout <<intResult << endl;

    // Test the function with floats
    float floatResult = add(3.5f, 2.45f);
    cout << floatResult << endl;
}
    // Test the function with double