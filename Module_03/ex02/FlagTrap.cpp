/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:28:08 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/18 16:28:11 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(void) : ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}
    
FlagTrap::FlagTrap(std::string Name) : ClapTrap(Name) 
{
    std::cout << "Copy constructor called" << std::endl;
    this->setHP(100);
    this->setEP(100);
    this->setAD(30);

}

FlagTrap &FlagTrap::operator=(FlagTrap const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}

FlagTrap::FlagTrap(FlagTrap const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

void FlagTrap::highFivesGuys(void)
{
    if (this->getHP() > 0)
        std::cout << this->getName() << " Gives a green light on High Five" << std::endl;
    else
        std::cout << this->getName() << " Gives a red light on High Five. He is dead." << std::endl;
}

FlagTrap::~FlagTrap(void) { }
