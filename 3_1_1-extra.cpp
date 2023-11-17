// Exercise 3.1.1: Have students create a function that calculates the factorial of a number using recursion
// Added Feature: This program returns an output statement "<number>! is <factorial>" using the static keyword to store the initial value of the variable before mutation
#include <iostream>
using namespace std;
int number;
int factorial(int n)
{
    static int nums = n; // stores the initial value of the 'n parameter' i.e number's factorial to be found
    number = nums;       // Assigns the value to an already declared variable outside the function
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
    cout << number << "! is " << result;
}