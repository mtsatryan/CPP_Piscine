/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:53:44 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/16 17:53:51 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int i;
        static const int e = 8;
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed const & src);
        Fixed & operator=(Fixed const & rhs);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif
