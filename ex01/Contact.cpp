/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:01:32 by zhlim             #+#    #+#             */
/*   Updated: 2023/10/01 18:30:51 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void	Contact::setAll(std::string firstName, std::string lastName, 
	std::string nickName, std::string phoneNumber, std::string darkestSecret) {
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName() const {
	return this->_firstName;
}

std::string	Contact::getLastName() const {
	return this->_lastName;
}

std::string	Contact::getNickName() const {
	return this->_nickName;
}

std::string Contact::getPhoneNumber() const {
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret() const {
	return this->_darkestSecret;
}