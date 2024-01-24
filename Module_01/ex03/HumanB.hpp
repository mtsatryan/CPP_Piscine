/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:42:15 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/13 14:21:01 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string Name;
		Weapon*		_weapon;
	public:
		HumanB(std::string Name);
		~HumanB();
		void	setWeapon(Weapon& weapon);
		void	attack();
};

#endif
