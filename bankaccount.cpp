#include "bankaccount.h"
#include <bits/stdc++.h>
using namespace std;

bankaccount::bankaccount(double initialbalance)
{
    balance = initialbalance;
    history.push_back("Account opened with  : " + to_string(initialbalance));
}

void bankaccount::deposit(double amount)

{
    if (amount <= 0)
    {
        cout << "Please enter amount more than zero(0)" << endl;
    }
    else
    {

        balance += amount;
        cout << amount << " " << "Deposited succesfully in your bank account" << endl;
        history.push_back("deposited : " + to_string(amount));
    }
}

void bankaccount::withdraw(double amount)

{
    if (amount <= 0)
    {
        cout << "Please enter amount more than zero(0)" << endl;
    }

    if (amount > balance)
    {
        cout << "amount is greater than availiable balance" << endl;
    }
    else
    {

        balance -= amount;
        cout << amount << " " << "withdraw succesfully from your bank account" << endl;
        history.push_back("withdraw : " + to_string(amount));
    }
}

void bankaccount::checkbalance() const
{
    cout << "Your bank balance is " << balance << endl;
}
void bankaccount::printstatement() const
{
    cout << "\n==== Bank Statement ====" << endl;
    for (const auto it : history)
    {
        cout << it << endl;
    }
    cout<<"Closing balance : "<<balance;
    cout << "========================" << endl;
}