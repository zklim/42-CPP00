/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:01:36 by zhlim             #+#    #+#             */
/*   Updated: 2023/10/01 21:14:26 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::createContact(int i, std::string firstName, std::string lastName, 
		std::string nickName, std::string phoneNumber, std::string darkestSecret) {
	this->phoneBook[i].setAll(firstName, lastName, nickName, phoneNumber, darkestSecret);			
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
