/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:01:36 by zhlim             #+#    #+#             */
/*   Updated: 2023/10/02 02:37:01 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::printPrompt() {
	std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
}

void	PhoneBook::printHeader() {
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;
}

void	PhoneBook::createContact() {
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "Please enter first name of the contact: ";
	std::getline(std::cin, firstName);

	std::cout << "Please enter last name of the contact: ";
	std::getline(std::cin, lastName);

	std::cout << "Please enter nickname of the contact: ";
	std::getline(std::cin, nickName);

	std::cout << "Please enter phone number of the contact: ";
	std::getline(std::cin, phoneNumber);

	std::cout << "Please enter darkest secrete of the contact: ";
	std::getline(std::cin, darkestSecret);
	
	phoneBook[this->index].setAll(firstName, lastName, nickName, phoneNumber, darkestSecret);
	this->index++;
	if (this->index == 8)
		this->index = 0;		
}

void	PhoneBook::searchContacts() {
	
}

Contact	PhoneBook::getContact(int i) const {
	return this->phoneBook[i];
}

std::string	PhoneBook::getFirstName(int i) const {
	return this->phoneBook[i].getFirstName();
}

std::string PhoneBook::getLastName(int i) const {
	return this->phoneBook[i].getLastName();
}

std::string PhoneBook::getNickName(int i) const {
	return this->phoneBook[i].getNickName();
}

std::string	PhoneBook::getPhoneNumber(int i) const {
	return this->phoneBook[i].getPhoneNumber();
}

std::string	PhoneBook::getDarkestSecret(int i) const {
	return this->phoneBook[i].getDarkestSecret();
}
