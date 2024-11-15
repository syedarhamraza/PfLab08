#include <iostream>
using namespace std;

int main()
{
    int day = 0;

    do
    {
        cout << "Enter an integer (1-7) or 8 to exit: ";
        cin >> day;
        switch (day)
        {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        case 8:
            cout << "Exiting Loop" << endl;
        default:
            cout << "Enter an integer only between 1 - 7 or 8 to exit" << endl;
            break;
        }
    } while (day != 8);

    return 0;
}