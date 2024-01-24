/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:54:31 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/16 17:54:55 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : i(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
	i = n << e;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(n * (1 << this->e)));
}

std::ostream &operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}

float Fixed::toFloat( void ) const
{
	return ((float)i / (1 << e));
}

int Fixed::toInt( void ) const
{
	return (i / (1 << e));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

int Fixed::getRawBits( void ) const
{
    return (this->i);
}

void Fixed::setRawBits( int const raw )
{
    this->i = raw;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->i = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
   std::cout << "Destructor called" << std::endl;
}
