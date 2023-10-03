/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:54:22 by zhlim             #+#    #+#             */
/*   Updated: 2023/10/03 17:46:35 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main() {
	PhoneBook phoneBook;
	std::string command;
	
	PhoneBook::printPrompt();
	while (1)
	{
		std::getline(std::cin, command);
		if (command == "ADD")
			phoneBook.createContact();
		else if (command == "SEARCH")
			phoneBook.searchContacts();
		else if (command == "EXIT")
			break;
		phoneBook.printPrompt();
	}
	return 0;
}