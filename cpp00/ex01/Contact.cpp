/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:04:00 by dsydelny          #+#    #+#             */
/*   Updated: 2024/01/03 19:02:10 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void) :
first_name(),
last_name(),
nickname(),
phone_number(),
darkest_secret()
{
	std::cout << "Contact Constructor has been called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact Destructor has been called" << std::endl;
	return ;
}

void	Contact::Set(void)
{
	std::cout << "Enter first name:" << std::endl;
	std::cin >> first_name; 
	std::cout << "Enter last name:" << std::endl;
	std::cin >> last_name;
	std::cout << "Enter nickname:" << std::endl;
	std::cin >> nickname;
	std::cout << "Enter phone number:" << std::endl;
	std::cin >> phone_number;
	std::cout << "Enter darkest secret:" << std::endl;
	std::cin >> darkest_secret;
	std::cout << "* * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "Yay! U just added a contact!\n\n\np.s. secret was too hot hihi" << std::endl;
}

void	Contact::Print(void)
{
	std::cout << "first name:" << first_name << std::endl;
	std::cout << "last name:" << last_name << std::endl;
	std::cout << "nickname:" << nickname << std::endl;
	std::cout << "phone number:" << phone_number << std::endl;
	std::cout << "darkest secret:" << darkest_secret << std::endl;
}

void	Contact::Found(void)
{
	std::cout << std::setw(10) << ((first_name.size() > 10) ? std::string(first_name, 0, 9) + "." : first_name);
	std::cout << "|";
	std::cout << std::setw(10) << ((last_name.size() > 10) ? std::string(last_name, 0, 9) + "." : last_name);
	std::cout << "|";
	std::cout << std::setw(10) << ((nickname.size() > 10) ? std::string(nickname, 0, 9) + "." : nickname);
	std::cout << "|" << std::endl;
}
