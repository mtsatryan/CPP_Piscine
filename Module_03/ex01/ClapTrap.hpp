/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:26:50 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/18 16:26:52 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string Name;
    int  HP;      
    int  EP;      
    int  AD;      

public:
    ClapTrap(void); 
    ClapTrap(std::string Name);                 
    ClapTrap &operator=(ClapTrap const &rhs);
    ClapTrap(ClapTrap const &src);              
    ~ClapTrap(void);                            
    
    std::string     getName(void) const;
    int             getEP(void) const;
    int             getHP(void) const;
    int             getAD(void) const;
    void            setHP(int input);
    void            setAD(int input);
    void            setEP(int input);
    void            attack(const std::string& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
};

#endif
