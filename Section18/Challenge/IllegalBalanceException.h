#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__

class IllegalBalanceException : public std::runtime_error
{
public:
    IllegalBalanceException() : std::runtime_error{"Couldn't create account - negative balance"}
    {
    }
    ~IllegalBalanceException() {}
};

class InsufficientFundsException : public std::runtime_error
{
public:
    InsufficientFundsException() : std::runtime_error{"Couldn't Withdraw amount  - Insufficient Funds. "}
    {
    }
    ~InsufficientFundsException() {}
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
