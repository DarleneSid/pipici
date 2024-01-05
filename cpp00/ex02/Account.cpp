/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:39:32 by dsydelny          #+#    #+#             */
/*   Updated: 2024/01/05 18:14:06 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <ctime>

int Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

void	Account::_displayTimestamp( void )
{
	auto currentTime = std::chrono::system_clock::now();

    std::time_t currentTime_t = std::chrono::system_clock::to_time_t(currentTime);

    char timeString[100];
    std::strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M:%S", std::localtime(&currentTime_t));

    std::cout << timeString << std::endl;
}

Account::Account( int initial_deposit )
{
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_totalAmount += initial_deposit;
	std::cout << "time: " << _displayTimestamp
			<< "\naccount #" << _accountIndex << "created"
			<< "\namount: " << initial_deposit << std::endl;
}

Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= _amount;
	std::cout << "time: " << _displayTimestamp
			<< "account #" << _accountIndex << "closed"
			<< "\namount: " << _amount << std::endl;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts: " << getNbAccounts()
			<< "\ntotal amount: " << getTotalAmount()
			<< "\ndeposits: " << getNbDeposits()
			<< "\nwithdrawals: " << getNbWithdrawals() << std::endl;
}
	
	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;














