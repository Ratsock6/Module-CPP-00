/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:28:46 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/06 20:38:34 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class	PhoneBook {

	private:
		Contact contact[8];
	public:
		void	add(void);
		int		getContactSize(void);
		void	list(void);
};