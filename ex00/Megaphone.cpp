/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:56:06 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/06 15:47:45 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void	setUpperCase(std::string s)
{
	int	i = 0;
	
	while (s[i])
	{
		s[i] = std::toupper(s[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	for (int i = 1; i <= argc - 1; i++)
	{
		setUpperCase(std::string(argv[i]));
		std::cout << argv[i];
	}
	std::cout << "\n";
	return (0);
}