/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:22:26 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/06 19:21:46 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact {

private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string number;
	std::string darkestSecret;

public:
	std::string getFirstName(void);
	void 		setFirstName(std::string firstName);
	std::string getLastName(void);
	void 		setLastName(std::string LastName);
	std::string getNickName(void);
	void 		setNickName(std::string nickName);
	std::string getNumber(void);
	void 		setNumber(std::string number);
	std::string getDarkestSecret(void);
	void 		setDarkestSecret(std::string darkestSecret);
	int			create(void);
	int			createFake(void);
	void print(void);
};
