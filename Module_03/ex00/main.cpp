/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:26:29 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/18 16:26:32 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int     main(void)
{
    ClapTrap Robot("Mike");
    ClapTrap Target("Jimmy");

    std::cout << Target.getHealth() << '\n';
    std::cout << Robot.getHealth() << '\n';
    
    Robot.attack("Bobby");
    Target.takeDamage(Robot.getAD());
    Robot.attack("Bobby");
    Target.takeDamage(Robot.getAD());
    Robot.attack("Bobby");
    Target.takeDamage(Robot.getAD());
    Robot.attack("Bobby");
    Target.takeDamage(Robot.getAD());
    std::cout << Target.getHealth() << " BOBBY'S HEALTH\n";

    Target.beRepaired(11);
    
    std::cout << Target.getAD() << '\n';
    std::cout << Target.getHealth() << '\n';
    return (0);
}
