/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:04:00 by dsydelny          #+#    #+#             */
/*   Updated: 2024/01/02 20:42:03 by dsydelny         ###   ########.fr       */
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
	std::cout << "Yay! U just added a contact!" << std::endl;
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
	std::cout << index << "|"
}
