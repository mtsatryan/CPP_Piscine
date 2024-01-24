/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:55:33 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/16 18:23:17 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int     main(void)
{
    Fixed a;
    Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;
    
    return 0;
}
