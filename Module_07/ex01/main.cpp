/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 02:19:54 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/27 17:33:55 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printElement(T const &element)
{
    std::cout << element << " ";
    return ;
}

int main( void ) 
{
	int			numbers[] = {12, 70, 12, 15, 23, 42};
    std::string names[] = {"Luke", "Leya", "Anakin", "Obi-Wan Kenobi", "R2D2", "C3PO"};

    std::cout << "Names   : ";
    iter(names, 6, printElement);
    std::cout << std::endl;

    std::cout << "Numbers : ";
    iter <int>(numbers, 6, printElement);
    std::cout << std::endl;

    return (0);
}