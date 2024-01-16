/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:56:29 by gcot              #+#    #+#             */
/*   Updated: 2023/09/17 15:04:17 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact_Class.hpp"
#include "PhoneBook_Class.hpp"
#include "Utils.hpp"

int	main(void)
{
	std::string command;
	PhoneBook book;
	std::cout << "\nWelcome\n\nYour phonebook actually is empty.\nYou can add a contact with the command [ADD], exit whit [EXIT] or search for nothing with [SEARCH]\n\ncommand : ";
	std::getline(std::cin, command);
	while (command != "EXIT")
	{
		if (command == "SEARCH")
		{
			book.Search_contact();
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
		else if (command == "ADD")
		{
			std::cout << "Add contact [" << book.Show_nb_contact() + 1 << "] in your phonebook\n\n";
			book.Add_contact();
		}
		else
			std::cout << "ERROR : Invalid command [" << command << "] !!\n\n";
		std::cout << "\nYou can add a contact with the command [ADD], exit whit [EXIT] or search for nothing with [SEARCH]\n\ncommand : ";
		std::getline(std::cin, command);
	}
	std::cout << "\nBye bye\n";
	return (0);
}
