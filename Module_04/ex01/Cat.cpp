/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:37:01 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:08:22 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) 
{ 
    std::cout << "CAT: Cat is being summoned" << std::endl;
    this->type = "Cat";
    this->catBrain = new Brain();
}

Cat::Cat(Cat const &)
{
    std::cout << "CAT: Cat is being copied" << std::endl;
    this->type = "Cat";
    this->catBrain = new Brain();
}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout << "CAT: Cat is summoning a copy assignment operator" << std::endl;
    this->catBrain = new Brain();
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
Cat::~Cat(void)
{ 
    std::cout << "CAT: Default Destructor called" << std::endl;
    delete(catBrain);
}