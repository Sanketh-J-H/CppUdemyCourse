#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Account{name, balance}, int_rate{int_rate}
{
}
/*
Deposit:
     Amount supplied to deposit will be incremented by (amount * int_rate/100)
     and then the updated amount will be deposited
     A Trust account has a name, a balance, and an interest rate
     The Trust account deposit works just like a savings account deposit.
     However, any deposits of $5000.00 or more will receive a $50.00 bonus deposited to the account.

*/
bool Trust_Account::deposit(double amount)
{
    if (amount >= 5000)
        amount += amount * (int_rate / 100) + 50;
    else
        amount += amount * (int_rate / 100);

    return Account::deposit(amount);
}

/*
    The Trust account withdrawal should only allow 3 withdrawals per year and each of these must be less than 20% of the account balance.
*/
bool Trust_Account::withdraw(double amount)
{
    
    if (withdrawals > 3)
    {
        std::cout << "You have reached the maximum number of withdrawals for the year .\n";
        return false;
    }

    if (amount > (balance * 20 / 100))
    {
        std::cout << "The entered amount is more than 20\% of your current balance , So the transaction is declined .\n";
        return false;
    }

    if (balance - amount >= 0)
    {
        balance -= amount;
        withdrawals += 1;
        return true;
    }
    else
        return false;
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}