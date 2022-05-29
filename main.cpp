/* C++ program demonstrate call by value, call by reference and call by address*/
#include <iostream>

using namespace std;
// Call by value or pass by value
void passByValue(int x, int y)
{
    int z = x; // Temp variable
    x = y;
    y = z;

}

int main()
{
    int a = 5, b = 6;
    cout << "Before swapping " << endl << "a: " <<a << endl <<"b: " << endl << endl;
    // Call function

    cout << "After swapping " << endl << "a: " <<a << endl <<"b: " << endl << endl;
    return 0;
}
