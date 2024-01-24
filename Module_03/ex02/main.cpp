/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:29:13 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/18 16:29:15 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"


int     main(void)
{  
    ScavTrap    RO("Robot");
    FlagTrap    ST("Barney");

    std::cout << ST.getName() << "'s AD IS : "<< ST.getAD() << std::endl;
    std::cout << ST.getName() << "'s HP IS : "<< ST.getHP() << std::endl;
    std::cout << ST.getName() << "'s EP IS : "<< ST.getEP() << std::endl;
    
    std::cout << ST.getName() << "'s AD IS : "<< ST.getAD() << std::endl;
    std::cout << ST.getName() << "'s HP IS : "<< ST.getHP() << std::endl;
    std::cout << ST.getName() << "'s EP IS : "<< ST.getEP() << std::endl;
    
    RO.attack("ST");
    ST.takeDamage(RO.getAD());
    std::cout << ST.getName() << "'s AD IS : "<< ST.getAD() << std::endl;
    std::cout << ST.getName() << "'s HP IS : "<< ST.getHP() << std::endl;
    std::cout << ST.getName() << "'s EP IS : "<< ST.getEP() << std::endl;
    
    ST.takeDamage(RO.getAD());
    std::cout << ST.getName() << "'s AD IS : "<< ST.getAD() << std::endl;
    std::cout << ST.getName() << "'s HP IS : "<< ST.getHP() << std::endl;
    std::cout << ST.getName() << "'s EP IS : "<< ST.getEP() << std::endl;
    
    ST.beRepaired(11);
    std::cout << ST.getName() << "'s AD IS : "<< ST.getAD() << std::endl;
    std::cout << ST.getName() << "'s HP IS : "<< ST.getHP() << std::endl;
    std::cout << ST.getName() << "'s EP IS : "<< ST.getEP() << std::endl;
    
    ST.highFivesGuys();
    ST.highFivesGuys();
    ST.highFivesGuys();
    ST.highFivesGuys();

    ST.takeDamage(RO.getAD());
    ST.takeDamage(RO.getAD());
    ST.takeDamage(RO.getAD());
    ST.takeDamage(RO.getAD());
    ST.takeDamage(RO.getAD());

    ST.highFivesGuys();
    ST.highFivesGuys();
    ST.highFivesGuys();
    ST.highFivesGuys();
    
    return (0);
}
