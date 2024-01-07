/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:39:32 by dsydelny          #+#    #+#             */
/*   Updated: 2024/01/05 18:15:24 by dsydelny         ###   ########.fr       */
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
	std::chrono::system_clock::time_point currentTime = std::chrono::system_clock::now();

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
	std::cout << "time: " << std::flush;
	_displayTimestamp();
	std::cout << "account  #" << _accountIndex << "  created"
			<< "\namount: " << initial_deposit << "\n\n" << std::endl;
}

Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= _amount;
	std::cout << "time: " << std::flush;
	_displayTimestamp();
	std::cout << "account  #" << _accountIndex << "  closed"
			<< "\namount: " << _amount  << "\n\n" << std::endl;
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
	std::cout << "time: " << std::flush;
	_displayTimestamp();
	std::cout << "accounts: " << getNbAccounts()
			<< "\ntotal amount: " << getTotalAmount()
			<< "\ndeposits: " << getNbDeposits()
			<< "\nwithdrawals: " << getNbWithdrawals() << "\n\n" << std::endl;
}
	
void	Account::makeDeposit( int deposit )
{
	std::cout << "time: " << std::flush;
	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "account  # " << _accountIndex << "\namount of deposits: "
			<< _nbDeposits - 1 << "\ncurrent amount: "
			<< _amount << "\ndeposit: " << deposit << std::endl;
	_amount += deposit;
	std::cout << "updated amount: " << _amount << "\n\n" << std::endl;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "account  # " << _accountIndex
			<< "\ncurrent amount: " << _amount
			<< "\namount to withdraw: " << withdrawal << std::endl;
	if (withdrawal > checkAmount())
	{
		std::cout << "withdrawal refused, not enough balance for transaction"  << "\n\n" << std::endl;
		return false;
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout << "withdrawal successesful\n" << "balance: " << _amount << "\n\n" << std::endl;
	return true;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "account  #" << _accountIndex << "\namount: " << _amount << "\ndeposits: "
			<< _nbDeposits << "\nwithdrawals: " << _nbWithdrawals << "\n\n" << std::endl;
}














