/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:17:41 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/13 19:03:47 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	this->issue[0] = "DEBUG";
	this->issue[1] = "INFO";
	this->issue[2] = "WARNING";
	this->issue[3] = "ERROR";
	this->issuePtr[0] = (&Karen::debug);
	this->issuePtr[1] = (&Karen::info);
	this->issuePtr[2] = (&Karen::warning);
	this->issuePtr[3] = (&Karen::error);
}
Karen::~Karen(void){ }

void	Karen::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
}

void	Karen::complain(std::string _issue)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->issue[i] == _issue)
			(this->*issuePtr[i])();
	}
}

