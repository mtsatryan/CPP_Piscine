/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:54:39 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/16 17:54:51 by mtsatrya         ###   ########.fr       */
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

        Fixed & operator=(Fixed const & rhs);
        int toInt( void ) const;
        int getRawBits( void ) const;
        float toFloat( void ) const;
        void setRawBits( int const raw );
};

	std::ostream	&operator<<(std::ostream &o, Fixed const & i);

#endif
