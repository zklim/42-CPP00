/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:38:38 by zhlim             #+#    #+#             */
/*   Updated: 2023/09/28 14:52:38 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	
	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < ac)
		{
			while (*av[i])
			{
				std::cout << (char)toupper(*av[i]);
				av[i]++;
			}
			i++;
		}
		std::cout << std::endl;
	}
}