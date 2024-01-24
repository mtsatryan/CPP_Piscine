/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:27:58 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/18 16:28:02 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FlagTrap : public ClapTrap
{
    private:

    public:
        FlagTrap(void);
        FlagTrap(std::string Name);
        FlagTrap &operator=(FlagTrap const &rhs);
        FlagTrap(FlagTrap const &src);
        ~FlagTrap(void);

        void highFivesGuys(void);

};

#endif
