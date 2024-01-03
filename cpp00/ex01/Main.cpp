/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:03:53 by dsydelny          #+#    #+#             */
/*   Updated: 2024/01/03 18:50:37 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string myinput;
	PhoneBook myPB;
	
	myPB.WelcomeMsg();
	while (!std::cin.eof())
	{
		std::cin >> myinput;
		if (myinput == "ADD")
			myPB.Add();
		else if (myinput == "SEARCH")
			myPB.Search();
		else if (myinput == "EXIT")
			return (0);
	}
	std::cout << std::endl;
	return (0);
}
