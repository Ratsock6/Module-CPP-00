/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 19:19:54 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/06 20:39:13 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
    PhoneBook   phoneBook;
	std::string	input;
	
	std::cout << "######################################################################" << std::endl;
	std::cout << " ____  _     ____  _      _____ ____  ____  ____  _  __" << std::endl;
	std::cout << "/  __\\/ \\ /|/  _ \\/ \\  /|/  __//  __\\/  _ \\/  _ \\/ |/ /" << std::endl;
	std::cout << "|  \\/|| |_||| / \\|| |\\ |||  \\  | | //| / \\|| / \\||   / " << std::endl;
	std::cout << "|  __/| | ||| \\_/|| | \\|||  /_ | |_\\\\| \\_/|| \\_/||   \\ " << std::endl;
	std::cout << "\\_/   \\_/ \\|\\____/\\_/  \\|\\____\\\\____/\\____/\\____/\\_|\\_\\" << std::endl;
	std::cout << "                        By: aallou-v" << std::endl;
	std::cout << "######################################################################" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << "Veuillez saisir une commande : ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			phoneBook.add();
		}
		else if (input == "SEARCH")
		{
			std::cout << "SEARCH\n";
		}
		else if (input == "EXIT")
		{
			std::cout << "EXIT\n";
			break ;
		}
        else if (input == "LIST")
		{
			phoneBook.list();
		}
		else if (input == "HELP")
		{
			std::cout << "Voici la liste des commandes poissibles :\n  - ADD : Permet d'ajouter un contact\n  - SEARCH : Permet d'afficher la liste de vos contacts et de rechercher\n  - EXIT : Permet de quitter le programme\n";
		}
		else
		{
			std::cout << input << ": command not found\n";
		}
	}
}
