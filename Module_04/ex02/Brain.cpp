/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:34:15 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:07:45 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "BRAIN: Default constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    std::cout << "BRAIN: Default copy constructor called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(Brain const &rhs)
{
    std::cout << "BRAIN: Copy assignment operator called" << std::endl;
    (void)rhs;
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "BRAIN: Default deconstructor called" << std::endl;
}