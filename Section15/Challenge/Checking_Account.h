#ifndef _CHECKING_ACCOUNT_
#define _CHECKING_ACCOUNT_

#include "Account.h"

class Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_fee = 1.50;
protected:
    double int_rate;
public:
    Checking_Account(std::string name = def_name, double balance =def_balance, double fee = def_fee );    
    bool deposit(double amount);
    // Inherits the Account::withdraw methods
};


#endif