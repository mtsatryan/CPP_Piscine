/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:38:19 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/13 19:18:54 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie
{
	private:
		std::string name;
	
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde(int N, std::string name);
#endif
