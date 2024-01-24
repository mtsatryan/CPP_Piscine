/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:55:23 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/16 17:55:25 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath> 

class Fixed
{
    private:
        int i;
        static const int e = 8;
    public:
        Fixed(void);
        Fixed(const int n);
        Fixed(const float n);
        Fixed(Fixed const & src);
        ~Fixed(void);

        bool operator>(Fixed const & rhs) const;
        bool operator<(Fixed const & rhs) const;
        bool operator<=(Fixed const & rhs) const;
        bool operator>=(Fixed const & rhs) const;
        bool operator!=(Fixed const & rhs) const;
        bool operator==(Fixed const & rhs) const;

        Fixed operator+(Fixed const &val) const;
        Fixed operator-(Fixed const &val) const;
        Fixed operator*(Fixed const &val) const;
        Fixed operator/(Fixed const &val) const;

        Fixed  operator++(int);
        Fixed &operator++(void);
        Fixed  operator--(int);
        Fixed &operator--(void);
        
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed&min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);

        Fixed & operator=(Fixed const & rhs);
        int toInt( void ) const;
        int getRawBits( void ) const;
        float toFloat( void ) const;
        void setRawBits( int const raw );
};

	std::ostream	&operator<<(std::ostream &o, Fixed const & i);

#endif
