/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:03:53 by dsydelny          #+#    #+#             */
/*   Updated: 2024/01/02 19:24:25 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string myinput;
	
	while (!std::cin.eof())
	{
		std::cin >> myinput;
		if (myinput == "ADD")
			//func
		else if (myinput == "SEARCH")
			//func
		else if (myinput == "EXIT")
			return (0);
	}
	std::cout << std::endl;
	return (0);
}
