/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:55:48 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:09:00 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) 
{ 
    std::cout << "WrongCat is being summoned" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &)
{
    std::cout << "WrongCat is being copied" << std::endl;
    this->type = "WrongCat";
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    std::cout << "WrongCat is summoning a copy assignment operator" << std::endl;
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
WrongCat::~WrongCat(void) { std::cout << "Default Destructor called" << std::endl; }