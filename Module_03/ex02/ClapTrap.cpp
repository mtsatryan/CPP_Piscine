/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:27:44 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/18 16:27:45 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name), HP(10), EP(10), AD(1)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

void    ClapTrap::attack(const std::string& target)
{
    this->EP--;
    std::cout << "ClapTrap " << this->Name << " attacks " << target << " causing "<< this->AD << " points of damage!" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
    {
        this->Name  = rhs.getName();
        this->HP    = rhs.getHP();
        this->EP    = rhs.getEP();
        this->AD    = rhs.getAD();
    }
		
	return *this;
}

std::string   ClapTrap::getName(void) const
{
    return (this->Name);
}

int   ClapTrap::getEP(void) const
{
    return (this->EP);
}

int    ClapTrap::getHP(void) const
{
    return (this->HP);
}

int     ClapTrap::getAD(void) const
{
    return (this->AD);
}

void    ClapTrap::setHP(int input)
{
    this->HP = input;
}

void            ClapTrap::setAD(int input)
{
    this->AD = input;
}

void            ClapTrap::setEP(int input)
{
    this->EP = input;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HP <= 0)
        std::cout << "The player " << this->Name << " is dead." << std::endl;
    else
        this->HP -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EP == 0)
        std::cout << "ClapTrap is out of Energy!" << std::endl;
    else
    {
        this->EP--;
        this->HP += amount;
    }
    
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default destructor called" << std::endl;
}
