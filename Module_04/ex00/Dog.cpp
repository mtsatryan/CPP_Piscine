/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:37:07 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:08:47 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) 
{ 
    std::cout << "Dog is being summoned" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const &)
{
    std::cout << "Dog is being copied" << std::endl;
    this->type = "Dog";
}

Dog &Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog is summoning a copy assignment operator" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.getType();
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Bark!" << std::endl;
}
Dog::~Dog(void) { std::cout << "Default Destructor called" << std::endl; }