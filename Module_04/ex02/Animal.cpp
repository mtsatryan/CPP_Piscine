/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:16:19 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:07:43 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(void) 
{
    this->type = "Animal";
    std::cout << "ANIMAL:Default constructor called" << std::endl; 
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "ANIMAL:Default overloaded constructor called" << std::endl;
}

Animal::Animal(Animal const &)
{
    std::cout << "Animal is being copied" << std::endl;
    this->type = "Animal";
}

Animal &Animal::operator=(Animal const &rhs)
{
    std::cout << "ANIMAL: Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.getType();
    }
    return (*this);
}

void    Animal::setType(std::string Type)
{
    this->type = Type;
}

std::string    Animal::getType(void) const
{
    return (this->type);
}

void Animal::makeSound(void) const
{
    std::cout << "ANIMAL SOUNDS!" << std::endl;
}

Animal::~Animal(void) { std::cout << "ANIMAL: Default destructor called" << std::endl; }