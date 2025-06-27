#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
    :   _accountIndex(_nbAccounts),
        _amount(initial_deposit),
        _nbDeposits(0),
        _nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout   << "index:"   << _accountIndex
                << ";amount:" << _amount
                << ";created" << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
    _displayTimestamp();
    std::cout   << "index:"     << _accountIndex
                << ";p_amount:" << _amount
                << ";withdrawal:";

    if (withdrawal > _amount){
        std::cout   << "refused"    << std::endl;
        return (false);
    }
    else{
        _amount         -= withdrawal;
        _totalAmount    -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
    }

    std::cout   << withdrawal
                << ";amount:"           << _amount
                << ";nb_withdrawals:"    << _nbWithdrawals
                << std::endl;
    return (true);
}

void	Account::makeDeposit(int deposit){
    _displayTimestamp();
    std::cout   << "index:"     << _accountIndex
                << ";p_amount:" << _amount
                << ";deposit:"  << deposit;

    _amount         += deposit;
    _totalAmount    += deposit;
    _nbDeposits++;
    _totalNbDeposits++;

    std::cout   << ";amount:"        << _amount
                << ";nb_deposits:"   << _nbDeposits
                << std::endl;
}

Account::~Account(void){
    _displayTimestamp();
    std::cout   << "index:"   << _accountIndex
                << ";amount:" << _amount
                << ";closed" << std::endl;
}

void	Account::displayAccountsInfos(void){
    _displayTimestamp();
    std::cout   << "accounts:"     << _nbAccounts
                << ";total:"       << _totalAmount
                << ";deposits:"    << _totalNbDeposits
                << ";withdrawals:" << _totalNbWithdrawals
                << std::endl;
}

void	Account::displayStatus(void) const{
    _displayTimestamp();
    std::cout   << "index:"         << _accountIndex
                << ";amount:"       << _amount
                << ";deposits:"     << _nbDeposits
                << ";withdrawals:"  << _nbWithdrawals
                << std::endl;
}

void	Account::_displayTimestamp(void){
    std::time_t t       = std::time(0);
    std::tm     *date   = std::localtime(&t);

    std::cout   << "["
                << (date->tm_year + 1900)
                << std::setw(2) << std::setfill('0')    << (date->tm_mon + 1)
                << std::setw(2) << std::setfill('0')    << date->tm_mday
                << "_"
                << std::setw(2) << std::setfill('0')    << date->tm_hour
                << std::setw(2) << std::setfill('0')    << date->tm_min
                << std::setw(2) << std::setfill('0')    << date->tm_sec
                << "] ";
}