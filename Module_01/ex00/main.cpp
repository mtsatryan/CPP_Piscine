/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:46:20 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/12 19:07:27 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie * zombie_0 = newZombie("Bob");
	Zombie * zombie_1 = newZombie("Jim");
	Zombie * zombie_2 = newZombie("Alex");

	randomChump("Mike");

	delete zombie_0;
	delete zombie_1;
	delete zombie_2;

	return (0);
}
