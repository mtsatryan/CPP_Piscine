/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:27:02 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/18 16:27:03 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVSTRAP_HPP
# define SCAVSTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap  : public ClapTrap
{
    private:
        
    public:
        ScavTrap(void);
        ScavTrap(std::string Name);
        ScavTrap &operator=(ScavTrap const &rhs);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap(void);

        void guardGate(void);
};

#endif
