#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main()
{
    // test your code here

    try
    {
        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account>("Moe", 1000.0);
        std::cout << *moes_account << std::endl;
        moes_account->withdraw(2000);
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    catch (const InsufficientFundsException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}