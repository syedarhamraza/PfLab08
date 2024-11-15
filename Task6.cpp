#include <iostream>
using namespace std;

int main()
{
    char color;
    cout << "Enter traffic light color (R, G, Y): ";
    cin >> color;

    switch (color)
    {
    case 'R':
        cout << "Stop";
        break;
    case 'G':
        cout << "Go";
        break;
    case 'Y':
        cout << "Slow down";
        break;
    default:
        cout << "Only enter (R, G, Y)";
    }

    return 0;
}
