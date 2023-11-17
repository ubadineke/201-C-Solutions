//2.4.1: Write a C++ program using a while loop to count down from 10 to 1, displaying the numbers on the console.
#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    while (i > 0)
    {
        cout << i << endl;
        i--;
    }
    return 0;
}