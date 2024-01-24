/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:37:07 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:07:50 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) 
{ 
    std::cout << "DOG: Dog is being summoned" << std::endl;
    this->type = "Dog";
    this->dogBrain = new Brain();
}

Dog::Dog(Dog const &)
{
    std::cout << "DOG: Dog is being copied" << std::endl;
    this->type = "Dog";
    this->dogBrain = new Brain();
}

Dog &Dog::operator=(Dog const &rhs)
{
    std::cout << "DOG: Dog is summoning a copy assignment operator" << std::endl;
    this->dogBrain = new Brain();
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
Dog::~Dog(void)
{
    std::cout << "DOG: Default Destructor called" << std::endl;
    delete(dogBrain);
}