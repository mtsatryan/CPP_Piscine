/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:52:34 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/11 22:55:02 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	i = 0;
}

void	PhoneBook::getContact(void)
{
	int z = 0;

	while (z < 8)
	{
		if (z < this->i)
		{
			std::cout << "     Index | First Name | Last Name  |  Nickname  |"<< std::endl;
			std::cout << std::setw(10) << this->i << " | ";
			if (this->contact[z].getFname().length() > 9)
				std::cout << std::setw(10) << this->contact[z].getFname().substr(0, 9) << ".| ";
			else
				std::cout << std::setw(10) << this->contact[z].getFname() << " | ";
			if (this->contact[z].getLname().length() > 9)
				std::cout << std::setw(10) << this->contact[z].getLname().substr(0, 9) << ".| ";
			else
				std::cout << std::setw(10) << this->contact[z].getLname() << " | ";
			if (this->contact[z].getNname().length() > 9)
				std::cout << std::setw(10) << this->contact[z].getNname().substr(0, 9) << ".| " << std:: endl;
			else
				std::cout << std::setw(10) << this->contact[z].getNname() << " | " << std::endl;
		}
		z++;
	}
}

void PhoneBook::add(void)
{
	Contact newContact;
	std::string input;
		
	std::cout << "Enter the First Name : ";	
	std::getline(std::cin, input);
	std::getline(std::cin, input);
	if (input.empty())
		return ;
	else
		newContact.setFname(input);
	std::cout << "Contact First Name saved as : " << newContact.getFname() << std::endl;
	input.clear();

	std::cout << "Enter the Last Name : ";
	std::getline(std::cin, input);
   	if (input.empty())
		return ;
	else
		newContact.setLname(input);
	std::cout << "Contact Last Name saved as : " << newContact.getLname() << std::endl;
	input.clear();
	
	std::cout << "Enter the Nickname : ";
	std::getline(std::cin, input);
	if (input.empty())
		return ;
	else
		newContact.setNname(input);
	std::cout << "Contact Nickame saved as : " << newContact.getNname() << std::endl;
	input.clear();

	std::cout << "Enter the Phone Number for " << newContact.getFname() << ": ";
	std::getline(std::cin, input);
	if (input.empty())
		return ;
	else
		newContact.setPnum(input);
	std::cout << "Contact Phone number saved as : " << newContact.getPnum() << std::endl;
	input.clear();

	std::cout << "Enter the Darketst Secret of " << newContact.getFname() << ": ";
	std::getline(std::cin, input);
	if (input.empty())
		return ;
	else
		newContact.setDsecret(input);
	std::cout << "The Darkest Secret is : " << newContact.getDsecret() << std::endl;	
	input.clear();

	std::cout << "The contact Saved as : " << newContact.getFname() << "\n";
	contact[this->i % 8] = newContact;
	this->i++;
}

void	PhoneBook::ListContact(int index)
{
	if (this->contact[index].getFname().empty())
		std::cout << "The index you search is epmty!" << std::endl;
	else
	{
		std::cout << "First Name:		" << this->contact[index].getFname() << std::endl;
		std::cout << "Last Name:		" << this->contact[index].getLname() << std::endl;
		std::cout << "Nickname :		"<< this->contact[index].getNname() << '\n';
		std::cout << "Phone Number:		"<< this->contact[index].getPnum() << '\n';
		std::cout << "Darkest Secret:		"<< this->contact[index].getDsecret() << std::endl;
	}
}

bool PhoneBook::isnum(std::string index)
{
	int i = 0;
	if (index.size() == 1 && index[i] >= '1' && index[i] <= '8')
		return true;
	return false;
}

void PhoneBook::search(void)
{
	getContact();
	std::string index;
	std::cout << "Please enter the Index" << std::endl;
	std::cin >> index;
	if (isnum(index))
		ListContact(stoi(index) - 1);
	else
		std::cout << "Error: Wrong index." << std::endl;
}

void PhoneBook::exit(void)
{
	std::cout << "Good Bye" << std::endl;
	std::exit(0);
}


PhoneBook::~PhoneBook(void){ }

