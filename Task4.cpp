#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout << "Enter a letter (A, B, C, D, F): ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Excellent";
        break;
    case 'B':
        cout << "Good";
        break;
    case 'C':
        cout << "Average";
        break;
    case 'D':
        cout << "Poor";
        break;
    case 'F':
        cout << "Fail";
        break;
    default:
        cout << "Invalid grade.";
    }

    return 0;
}
