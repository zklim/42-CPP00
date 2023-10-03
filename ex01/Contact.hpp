/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:01:27 by zhlim             #+#    #+#             */
/*   Updated: 2023/10/02 17:36:53 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact {
	
public:

		Contact();
		~Contact();

		void	setAll(std::string firstName, std::string lastName, 
			std::string nickName, std::string phoneNumber, std::string darkestSecret);
		
		std::string	getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;
		int			isInit() const;

private:

		int			_isInit;
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif