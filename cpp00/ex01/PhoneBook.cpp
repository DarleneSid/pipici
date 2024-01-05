/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:04:07 by dsydelny          #+#    #+#             */
/*   Updated: 2024/01/05 16:27:16 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) :
index(0),
counter(0)
{
	std::cout << "Phonebook Constructor has been called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook Destructor has been called" << std::endl;
	return ;
}

void	PhoneBook::WelcomeMsg(void)
{
	std::cout << "\n\n\n\n\n\n" << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "* *            COUCOU           * *" << std::endl;
	std::cout << "* *   WELCOME TO MY PHONEBOOK   * *" << std::endl;
	std::cout << "* *             <3              * *" << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "* *  now type some command :)   * *" << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "\n\n\n\nhere: " << std::endl;
}

void	PhoneBook::Add(void)
{
	std::cout << "\n\n\n" << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * *" << std::endl;
	all[index].Set();
	std::cout << "* * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "\n\n\n" << std::endl;
	if (++index == 8)
		index = 0;
	if (counter < 8)
		counter++;
}

void	PhoneBook::Search(void)
{
	int	i = 0;

	if (!counter)
	{
		std::cout << "\n\n\nempty :( add some contacts <3\n\n\n" << std::endl;
		return ;
	}
	while (i < counter)
	{
		std::cout << "* * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
		std::cout << "|" << std::setw(10) << i << "|";
		all[i].MyBook();
		i++;
	}
	std::cout << "\n\n\nhey :) enter index of ur contact <3\nhere: " ;
	std::cin >> i;
	if (std::cin.eof())
		return ;
	else if (i >= 0 && i < counter)
		all[i].Print();
	else
	{
		std::cout << "\n\n\nplease, enter something index which exist :*\n\n\n" << std::endl;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		Search();
	}

}

void	PhoneBook::PrintContact(void)
{
	int	i = 0;

	std::cout << "* * * <3 MY PHONEBOOK <3 * * *" << std::endl;
	while(i < counter)
	{
		std::cout << "* * * contact #" << i << " * * *" << std::endl;
		all[i].Print();
		i++;
	}
}
