/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:26:04 by mbernard          #+#    #+#             */
/*   Updated: 2024/07/27 20:17:12 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "../ex02/Account.hpp"

void    Account::Account(void)
    :initial_deposit(0); {
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
}
