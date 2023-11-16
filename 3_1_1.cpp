// Exercise 3.1.1: Have students create a function that calculates the factorial of a number using recursion
#include <iostream>
using namespace std;
int number;
int factorial(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int result;
    cout << "Enter a number";
    cin >> number;
    result = factorial(number);
    cout << result;
}