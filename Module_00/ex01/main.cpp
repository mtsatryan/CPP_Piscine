/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:07:35 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/11 22:54:37 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void	run(string str, PhoneBook &pb)
{

	if (str == "ADD")
	{
		pb.add();
	}
	else if (str == "SEARCH")
	{
		pb.search();
	}
	else if (str == "EXIT")
	{
		pb.exit();
	}
}

int	main(void)
{
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "---------------PHONEBOOK---------------" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	
	std::string str;
	PhoneBook pb;
	while(1)
	{

		std::cout << "Enter your command: ADD, SEARCH or EXIT" << std::endl;
		std::cin >> str;
		run(str, pb);
		if (std::cin.eof() && !std::cin.ignore(1000, '\n'))
			break;
	}

	return (0);
}
