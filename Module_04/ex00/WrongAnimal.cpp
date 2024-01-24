/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:55:20 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:08:58 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "Default overloaded constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.getType();
    }
    return (*this);
}

void    WrongAnimal::setType(std::string Type)
{
    this->type = Type;
}

std::string    WrongAnimal::getType(void) const
{
    return (this->type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Cocaine Bro?" << std::endl;
}

WrongAnimal::~WrongAnimal(void) { std::cout << "Default destructor called" << std::endl; }