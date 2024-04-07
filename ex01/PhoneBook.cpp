/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:56:06 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/07 13:53:34 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <iomanip>
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

std::string	reSize(std::string name)
{
	if (name.length() < 10)
		return (name);
	name.resize(9);
	name.append(".");
	return (name);
}

void	PhoneBook::search(void)
{
	int			contactSize = getContactSize();
	std::string	input;
	
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "Prenom" << "|";
	std::cout << std::setw(10) << "Nom" << "|";
	std::cout << std::setw(10) << "Surnom" << "|" << std::endl;
	if (contactSize == 0)
	{
		std::cout << "Il n'y a personne dans le registre de vos contacts" << std::endl;
		return ;
	}
	for (int i = 0; i < contactSize; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << reSize(this->contact[i].getFirstName()) << "|";
		std::cout << std::setw(10) << reSize(this->contact[i].getLastName()) << "|";
		std::cout << std::setw(10) << reSize(this->contact[i].getNickName()) << "|" << std::endl;
	}
	std::cout << "Entrez un l'index de votre contact" << std::endl;
	std::getline(std::cin, input);
	if (input == "1")
		this->contact[0].print();
	else if (input == "2")
		this->contact[1].print();
	else if (input == "3")
		this->contact[2].print();
	else if (input == "4")
		this->contact[3].print();
	else if (input == "5")
		this->contact[4].print();
	else if (input == "6")
		this->contact[5].print();
	else if (input == "7")
		this->contact[6].print();
	else if (input == "8")
		this->contact[7].print();
	else
	{
		std::cout << "Cette index de contact n'existe pas ou est invalide.";
	}
	
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
