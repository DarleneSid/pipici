/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:04:11 by dsydelny          #+#    #+#             */
/*   Updated: 2024/01/02 20:45:52 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include  "Contact.hpp"
class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		//functions;
	private:
	int	index;
	int	counter;
	Contact  all[8];
};

#endif
