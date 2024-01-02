/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:04:11 by dsydelny          #+#    #+#             */
/*   Updated: 2024/01/02 20:54:43 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
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
