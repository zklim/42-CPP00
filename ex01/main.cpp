/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:54:22 by zhlim             #+#    #+#             */
/*   Updated: 2023/10/02 01:30:21 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main() {
	PhoneBook phoneBook;
	std::string command;
	
	phoneBook.printPrompt();
	while (1)
	{
		std::cin >> command;
		if (command == "ADD")
			phoneBook.createContact();
		else if (command == "SEARCH")
			phoneBook.searchContacts();
		else if (command == "EXIT")
			break;
		else
			phoneBook.printPrompt();
	}
	return 0;
}