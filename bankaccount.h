#include <bits/stdc++.h>
using namespace std;
class bankaccount
{
private:
    double balance;
    vector<string>history;

public:
    bankaccount(double initialbalance);
    void deposit(double amount);
    void withdraw(double amount);
    void checkbalance() const;
    void printstatement() const;
};