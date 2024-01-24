/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:29:32 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/18 16:29:34 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}
    
ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) 
{
    std::cout << "Copy constructor called" << std::endl;
    this->setHP(100);
    this->setEP(50);
    this->setAD(20);

}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

void ScavTrap::guardGate(void)
{
    std::cout << this->getName() << " is in the Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(void) { }
