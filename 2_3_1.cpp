// Exercise 2.3.1 Write a program using conditional statment to determine if a number is odd or even
#include <iostream>
using namespace std;
int number;
int result;
int main()
{
    cout << "Enter a number:";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "The number " << number << " is an even number" << endl;
    }
    else
        cout << "The number " << number << " is an odd number" << endl;
    return 0;
}