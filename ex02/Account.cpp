#include <iostream>
#include "Account.hpp"

Account::Account(){
    _accountIndex = _nbAccounts;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
}

Account::Account(int initial_deposit){
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int Account::getNbAccounts(void){
    return _nbAccounts;
}

int Account::getTotalAmount(void){
    return _totalAmount;
}   

int Account::getNbDeposits(void){
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void){
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void){
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::_displayTimestamp(void){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::cout << "["  << 1900 + ltm->tm_year << 1 + ltm->tm_mon << ltm->tm_mday << "_" << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "] ";
}

void Account::makeDeposit(int deposit){
    _displayTimestamp();
    _nbDeposits++;
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal){
    _displayTimestamp();
    _nbWithdrawals++;
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (_amount < withdrawal){
        std::cout << "refused" << std::endl;
        return false;
    }
    std::cout << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    return true;
}

int Account::checkAmount(void) const{
    return _amount;
}

void Account::displayStatus(void) const{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}


Account::~Account(void){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    _nbAccounts--;
}

