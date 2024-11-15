#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Enter a month (1-12): ";
    cin >> month;

    switch (month)
    {
    case 12:
    case 1:
    case 2:
        cout << "Winter";
        break;
    case 3:
    case 4:
    case 5:
        cout << "Spring";
        break;
    case 6:
    case 7:
    case 8:
        cout << "Summer";
        break;
    case 9:
    case 10:
    case 11:
        cout << "Fall";
        break;
    default:
        cout << "Only enter 1 - 12";
    }

    return 0;
}
