/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:54:22 by zhlim             #+#    #+#             */
/*   Updated: 2023/10/01 18:19:57 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	printPhoneBook() {
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
}

int	main() {
	printPhoneBook();
}