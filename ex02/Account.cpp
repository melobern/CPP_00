/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:26:04 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/28 16:13:41 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "../ex02/Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
    :_accountIndex(_nbAccounts++),
     _amount(initial_deposit),
     _nbDeposits(0),
     _nbWithdrawals(0) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << initial_deposit << ";";
    std::cout << "created" << std::endl;
    _totalAmount += this->_amount;
    return;
}

Account::~Account(void) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
    return;
}

int    Account::getNbAccounts(void) {
    return (_nbAccounts);
}

int    Account::getTotalAmount(void) {
    return (_totalAmount);
}

int    Account::getNbDeposits(void) {
    return (_totalNbDeposits);
}

int    Account::getNbWithdrawals(void) {
    return (_totalNbWithdrawals);
}

void   Account::displayAccountsInfos(void) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}


void    Account::makeDeposit(int deposit) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    _totalAmount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    if (this->_amount < withdrawal) {
        std::cout << "withdrawal:refused" << std::endl;
        return(false);
    }
    this->_amount -= withdrawal;
    _totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << "withdrawal:" << withdrawal << ":";
    std::cout << "amount:" << this->_amount << ":";
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return(true);
}

int    Account::checkAmount(void) const {
    return (this->_amount);
}

void   Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void   Account::_displayTimestamp(void) {
    char           timestamp[16];
    std::time_t    time = std::time(0);
    std::tm        *localtime = std::localtime(&time);

    std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", localtime);
    std::cout << "[" << timestamp << "] ";
}
