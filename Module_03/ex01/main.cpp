/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:27:07 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/18 16:27:09 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    ScavTrap    ST("Karen");
    ScavTrap    RO("Robot");
   
    std::cout << ST.getName() << "'s AD IS : "<< ST.getAD() << std::endl;
    std::cout << ST.getName() << "'s HP IS : "<< ST.getHP() << std::endl;
    std::cout << ST.getName() << "'s EP IS : "<< ST.getEP() << std::endl;
    
    ST.guardGate();
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
    
    return (0);
}
