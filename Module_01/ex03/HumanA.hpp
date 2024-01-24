/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:52:14 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/13 13:45:22 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string Name;
		Weapon	&weapon;
	public:
		HumanA(std::string _name, Weapon &_weapon);
		~HumanA();
		void	attack();
};

#endif
