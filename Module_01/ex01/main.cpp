/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:46:20 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/13 19:21:32 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	int N;
	int i;
	std::string name;
	Zombie *zombiesHorde;
	
	i = -1;
	std::cout << "Enter the amount of Zombies you want to generate:";
	std::cin >> N;
	
	std::cout << "Enter the name of your Zombies :";
	std::cin >> name;

	zombiesHorde = zombieHorde(N, name);
	while(++i < N)
		zombiesHorde[i].announce();
	delete[] zombiesHorde;
	return (0);
}
