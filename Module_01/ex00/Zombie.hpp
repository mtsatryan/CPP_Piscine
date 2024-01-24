/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:38:19 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/12 18:54:30 by mtsatrya         ###   ########.fr       */
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
		Zombie(std::string _name);
		~Zombie();
		void	announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
