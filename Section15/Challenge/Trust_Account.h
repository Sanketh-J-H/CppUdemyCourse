#ifndef _TRUST_ACCOUNT_H
#define _TRUST_ACCOUNT_H

#include "Account.h"
#include <iostream>

class Trust_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);

private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    unsigned short int withdrawals = 0;
protected:
    double int_rate;

public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif