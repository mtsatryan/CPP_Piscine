/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:05:19 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/13 13:49:07 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : Name(_name), weapon(_weapon)
{

}

HumanA::~HumanA(void)
{

}

void HumanA::attack()
{
	std::cout << this->Name << " attacks with their " << weapon.getType() << std::endl;
}
