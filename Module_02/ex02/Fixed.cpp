/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:55:15 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/16 18:39:29 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : i(0){ }

Fixed::Fixed(const int n) {	i = n << e; }

Fixed::Fixed(const float n)
{
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
	if (this != &rhs)
		this->i = rhs.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

Fixed Fixed::operator+(Fixed const &val) const
{
	Fixed res;

	res.setRawBits(this->getRawBits() + val.getRawBits());
	return (res);
}

Fixed Fixed::operator-(Fixed const &val) const
{
	Fixed res;

	res.setRawBits(this->getRawBits() - val.getRawBits());
	return (res);
}

Fixed Fixed::operator*(Fixed const &val) const
{
	Fixed res;

	res.setRawBits((this->getRawBits() * val.getRawBits()) >> this->e);
	return (res);
}

Fixed Fixed::operator/(Fixed const &val) const
{
	if (val.getRawBits() == 0)
		return (-1);
	return (Fixed(this->toFloat() / val.toFloat()));
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}

Fixed &Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.i < b.i)
		return(a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.i < b.i)
		return(a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.i > b.i)
		return(a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.i > b.i)
		return(a);
	return (b);
}

Fixed::~Fixed(void) { }
