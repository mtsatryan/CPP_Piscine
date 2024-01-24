/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:45:10 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/13 15:42:39 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : Name(_name)
{
	_weapon = NULL;
}

HumanB::~HumanB(void)
{

}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (_weapon == NULL)
			std::cout << this->Name << " attacks with their...ops. Look's like the player " << this->Name << " is unarmed."<< std::endl;
	else
		std::cout << this->Name << " attacks with their " << _weapon->getType() << std::endl;

}
