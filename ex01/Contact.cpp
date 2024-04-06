/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:56:06 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/06 18:55:04 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"



std::string Contact::getFirstName(void)
{
	return (this->firstName);
}

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

std::string Contact::getLastName(void)
{
	return (this->lastName);
}

std::string Contact::getNickName(void)
{
	return (this->nickName);
}

void Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

std::string Contact::getNumber(void)
{
	return (this->number);
}

void Contact::setNumber(std::string number)
{
	this->number = number;
}

std::string Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}
int Contact::create(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string number;
	std::string darkestSecret;

	std::cout << "Enter the First Name" << std::endl;
	std::getline(std::cin, firstName);
	std::cout << "Enter the Last Name" << std::endl;
	std::getline(std::cin, lastName);
	std::cout << "Enter the Nickname" << std::endl;
	std::getline(std::cin, nickName);
	std::cout << "Enter the Number" << std::endl;
	std::getline(std::cin, number);
	std::cout << "Enter the Darkest Secret" << std::endl;
	std::getline(std::cin, darkestSecret);

	if (firstName.empty() || lastName.empty() || nickName.empty() || number.empty() || darkestSecret.empty())
		return (0);
	setFirstName(firstName);
	setLastName(lastName);
	setNumber(number);
	setNickName(nickName);
	setDarkestSecret(darkestSecret);

	return (1);
}

int Contact::createFake(void)
{
	setFirstName("");
	setLastName("");
	setNumber("");
	setNickName("");
	setDarkestSecret("");
	return (1);
}

void Contact::print(void)
{
	std::cout << "First Name : " << this->getFirstName() << std::endl;
	std::cout << "Last Name : " << this->getLastName() << std::endl;
	std::cout << "Nickname : " << this->getNickName() << std::endl;
	std::cout << "Phone Number : " << this->getNumber() << std::endl;
	std::cout << "Darkest Secret : " << this->getDarkestSecret() << std::endl;
}