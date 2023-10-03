/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:01:36 by zhlim             #+#    #+#             */
/*   Updated: 2023/10/03 18:11:13 by zhlim            ###   ########.fr       */
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

	if (this->index == 8)
	{
		this->index = 0;
		while (this->index < 7)
		{
			this->phoneBook[this->index] = this->phoneBook[this->index + 1];
			this->index++;
		}
	}
	std::cout << "Please enter first name of the contact: ";
	std::getline(std::cin, firstName);
	while (!firstName.size())
	{
		std::cout << "Cannot be empty!" << std::endl;
		std::cout << "Please enter first name of the contact: ";
		std::getline(std::cin, firstName);
	}

	std::cout << "Please enter last name of the contact: ";
	std::getline(std::cin, lastName);
	while (!lastName.size())
	{
		std::cout << "Cannot be empty!" << std::endl;
		std::cout << "Please enter last name of the contact: ";
		std::getline(std::cin, lastName);
	}

	std::cout << "Please enter nickname of the contact: ";
	std::getline(std::cin, nickName);
	while (!nickName.size())
	{
		std::cout << "Cannot be empty!" << std::endl;
		std::cout << "Please enter nickname of the contact: ";
		std::getline(std::cin, nickName);
	}

	std::cout << "Please enter phone number of the contact: ";
	std::getline(std::cin, phoneNumber);
	while (!phoneNumber.size())
	{
		std::cout << "Cannot be empty!" << std::endl;
		std::cout << "Please enter phone number of the contact: ";
		std::getline(std::cin, phoneNumber);
	}

	std::cout << "Please enter darkest secret of the contact: ";
	std::getline(std::cin, darkestSecret);
	while (!darkestSecret.size())
	{
		std::cout << "Cannot be empty!" << std::endl;
		std::cout << "Please enter darkest secret of the contact: ";
		std::getline(std::cin, darkestSecret);
	}
	
	phoneBook[this->index].setAll(firstName, lastName, nickName, phoneNumber, darkestSecret);
	this->index++;
}

void	PhoneBook::displayContacts() {
	
	int	i;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	i = 0;
	PhoneBook::printHeader();
	while (this->phoneBook[i].isInit() && i < 8)
	{
		firstName = this->getFirstName(i);
		if (firstName.size() >= 10)
		{
			firstName.resize(9);
			firstName += ".";
		}
		lastName = this->getLastName(i);
		if (lastName.size() >= 10)
		{
			lastName.resize(9);
			lastName += ".";
		}
		nickName = this->getNickName(i);
		if (nickName.size() >= 10)
		{
			nickName.resize(9);
			nickName += ".";
		}
		phoneNumber = this->getPhoneNumber(i);
		if (phoneNumber.size() >= 10)
		{
			phoneNumber.resize(9);
			phoneNumber += ".";
		}

		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << firstName << "|";
		std::cout << std::setw(10) << lastName << "|";
		std::cout << std::setw(10) << nickName << "|";
		std::cout << std::endl;
		
		i++;
	}
}

void	PhoneBook::displaySingle(int i) {
	
	std::cout << "First Name: " << this->getFirstName(i) << std::endl;
	std::cout << "Last Name: " << this->getLastName(i) << std::endl;
	std::cout << "Nickname: " << this->getNickName(i) << std::endl;
	std::cout << "Phone Number: " << this->getPhoneNumber(i) << std::endl;
	std::cout << "Darkest Secret: " << this->getDarkestSecret(i) << std::endl;
}

void	PhoneBook::searchContacts() {
	std::string	str;
	int			i;

	i = 8;
	this->displayContacts();
	if (!this->phoneBook[0].isInit())
		std::cout << "No contact to display." << std::endl;
	else
	{
		std::cout << "Please enter index to display contact: ";
		std::getline(std::cin, str);
		i = str.front() - '0';
		while (str.size() != 1 || i >= 8 || !phoneBook[i].isInit())
		{
			std::cout << "Please enter a valid index: ";
			std::getline(std::cin, str);
			i = str.front() - '0';
		}
		this->displaySingle(i);
	}
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
