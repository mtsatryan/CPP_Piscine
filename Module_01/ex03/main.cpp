/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:42:19 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/13 15:42:10 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int		main(void)
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Some other type of club");
		jim.attack();
	}
	{
		Weapon Sword = Weapon("Sword");
		
		HumanB mike("Mike");
		mike.attack();
		mike.setWeapon(Sword);
		mike.attack();
		Sword.setType("Yo mama jokes");
		mike.attack();
	}
	return (0);
}
