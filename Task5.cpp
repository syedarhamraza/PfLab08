#include <iostream>
using namespace std;

int main()
{
    double balance = 0, amount = 0;
    int choice;

    do
    {
        cout << "Choose an option" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter deposit amount: ";
            cin >> amount;
            if (amount > 0)
            {
                balance += amount;
                cout << "Current balance: $" << balance << endl;
            }
            else
            {
                cout << "Invalid amount.";
            }
            break;
        case 2:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Current balance: $" << balance << endl;
            }
            else
            {
                cout << "Invalid or insufficient funds.";
            }
            break;
        case 3:
            cout << "Current balance: $" << balance << endl;
            break;
        case 4:
            cout << "Exiting Program";
            break;
        default:
            cout << "Invalid choice.";
        }
    } while (choice != 4);

    return 0;
}
