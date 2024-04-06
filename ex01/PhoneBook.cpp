/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:56:06 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/06 20:38:18 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"

int	PhoneBook::getContactSize(void)
{
	int	i;

	i = 0;
	while (i < 8 && !this->contact[i].getFirstName().empty())
		i++;
	return (i);
}

void	PhoneBook::add(void)
{
	int		contactSize = getContactSize();
	Contact	new_contact;

	if (!new_contact.create())
	{
		std::cout << "Create contact error" << std::endl;
		return ;
	}
	if (contactSize >= 8)
	{
		for (int i = 0; i < 7; i++)
		{
			this->contact[i] = this->contact[i + 1];
		}
		contact[7] = new_contact;
		std::cout << "Voici la nouvelles liste des contacts :" << std::endl;
		return ;
	}

	contact[contactSize] = new_contact;
}

void	PhoneBook::list(void)
{
	std::cout << "Voici la nouvelles liste des contacts :" << std::endl;
	for (int i = 0; i <= 7; i++)
	{
		this->contact[i].print();
		std::cout << "----------------------\n";
	}
}
