/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:26:04 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/27 21:57:07 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "../ex02/Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void    Account::Account(int initial_deposit)
    :_accountIndex(_nbAccounts++),
     _amount(initial_deposit),
     _nbDeposits(0),
     _nbWithdrawals(0) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << initial_deposit << ";";
    std::cout << "created" << std::endl;
    _totalAmount += this->amount;
    return;
}

void    Account::~Account(void) {
    return;
}

static int    getNbAccounts(void) {
    return (this->_nbAccounts);
}

static int    getTotalAmount(void) {
    return (this->_totalAmount);
}

static int    getNbDeposits(void) {
    return (this->_totalNbDeposits);
}

static int    getNbWithdrawals(void) {
    return (this->_totalNbWithdrawals);
}

staticvoid   displayAccountsInfos(void) {
    this->displayAccountsInfos();
}


void    makeDeposit(int deposit) {
}

bool    makeWithdrawal(int withdrawal) {
}

int    checkAmount(void) const {
    return (this->_amount);
}

void    displayStatus(void) const {
}

staticvoid   _displayTimestamp(void) {
    char           timestamp[16];
    std::time_t    time = std::time(0);
    std::tm        *locatime = std::localtime(&time);

    std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", localtime);
    std::cout << "[" << timestamp << "] ";
}
