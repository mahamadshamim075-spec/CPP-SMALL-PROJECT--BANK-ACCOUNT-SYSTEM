#include "bankaccount.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    double amount;
    
    bankaccount account(1000.00);
    do
    {
        cout << "\n==== BANK ACCOUNT SYSTEM ====\n";
        cout << " 1.CHECK BALANCE " << endl;
        cout << " 2.DEPOSIT MONEY " << endl;
        cout << " 3.WITHDRAW MONEY " << endl;
        cout << " 4.print statement " << endl;
        cout << " 5.EXIT " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            account.checkbalance();
            break;

        case 2:
            cout << "Enter Deposit Amount" << endl;
            cin >> amount;
            account.deposit(amount);
            break;

        case 3:
            cout << "Enter Withdraw Amount" << endl;
            cin >> amount;
            account.withdraw(amount);
            break;
        case 4:
            account.printstatement();
            break;


        case 5:
            cout << "Thank you for using bank account system" << endl;
            break;

        default:
            cout << "Invalid choice.Please try again" << endl;
        }

    } while (choice != 4);
    return 0;
}
