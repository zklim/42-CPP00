/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:01:38 by zhlim             #+#    #+#             */
/*   Updated: 2023/10/02 01:30:38 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iostream>
# include <iomanip>

class PhoneBook {
	
public:

	PhoneBook();
	~PhoneBook();

	void	createContact();
	void	searchContacts();
	void	printPrompt();
	void	printHeader();

	Contact	getContact(int i) const;
	std::string	getFirstName(int i) const;
	std::string getLastName(int i) const;
	std::string getNickName(int i) const;
	std::string	getPhoneNumber(int i) const;
	std::string	getDarkestSecret(int i) const;
		
private:

	Contact phoneBook[8];
	int		index;
};

#endif