/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:37:01 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:08:45 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) 
{ 
    std::cout << "Cat is being summoned" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const &)
{
    std::cout << "Cat is being copied" << std::endl;
    this->type = "Cat";
}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat is summoning a copy assignment operator" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.getType();
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}
Cat::~Cat(void) { std::cout << "Default Destructor called" << std::endl; }