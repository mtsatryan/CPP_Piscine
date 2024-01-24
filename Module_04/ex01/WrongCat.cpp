/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:55:48 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:08:32 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) 
{ 
    std::cout << "WRONGCAT: WrongCat is being summoned" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &)
{
    std::cout << "WRONGCAT: WrongCat is being copied" << std::endl;
    this->type = "WrongCat";
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    std::cout << "WRONGCAT: WrongCat is summoning a copy assignment operator" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.getType();
    }
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "Catnip Bro?" << std::endl;
}
WrongCat::~WrongCat(void) { std::cout << "WRONGCAT: Default Destructor called" << std::endl; }