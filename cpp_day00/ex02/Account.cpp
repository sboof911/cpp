/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:44:18 by amaach            #+#    #+#             */
/*   Updated: 2021/12/20 14:13:27 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account( int initial_deposit )
{
    _accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::~Account( void )
{
    
}

int  Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int  Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int  Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int  Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:";
    std::cout << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_totalNbDeposits += 1;
    this->_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (this->_totalAmount > withdrawal)
    {
        this->_totalNbWithdrawals += 1;
        this->_totalAmount -= withdrawal;
        return (1);
    }
    else
        return (0);
}

// int		Account::checkAmount( void )
// {
    
// }

// void	Account::displayStatus( void )
// {
    
// }

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;