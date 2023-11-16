// Exercise 2.3.2 Write a C++ program that takes a student's exam score as input and uses an if statement to determine their grade based on the following criteria
// Score 90-100: A
// Score 80-89: B
// Score 70-79: C
// Score 60-69: D
// Score below 60: F
// Prompt the user to enter the score and display the corresponding grade.

#include <iostream>
using namespace std;
int score;
int main()
{
    cout << "Enter your score:";
    cin >> score;
    if (score >= 90)
    {
        cout << "You got an A in this course" << endl;
    }
    else if (score >= 80)
    {
        cout << "You got an B in this course" << endl;
    }
    else if (score >= 70)
    {
        cout << "You got an C in this course" << endl;
    }
    else if (score >= 60)
    {
        cout << "You got an D in this course" << endl;
    }
    else if (score <= 59)
    {
        cout << "You got an F in this course" << endl;
    }
    return 0;
}