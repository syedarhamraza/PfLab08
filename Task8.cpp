#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number (0-9): ";
    cin >> number;

    switch (number)
    {
    case 0:
        cout << "zero";
        break;
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "three";
        break;
    case 4:
        cout << "four";
        break;
    case 5:
        cout << "five";
        break;
    case 6:
        cout << "six";
        break;
    case 7:
        cout << "seven";
        break;
    case 8:
        cout << "eight";
        break;
    case 9:
        cout << "nine";
        break;
    default:
        cout << "Please enter a number between 0 and 9";
    }

    return 0;
}
