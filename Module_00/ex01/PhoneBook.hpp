/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:07:11 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/11 22:55:08 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Contact.hpp"
class Contact;

class PhoneBook
{
	public:
			PhoneBook(void);
			~PhoneBook(void);
			int		i;
			void	add(void);
			void	search(void);
			void	exit(void);
			void	getContact(void);
			void	ListContact(int index);
			bool 	isnum(std::string);
	private:
			Contact	contact[8];
};
