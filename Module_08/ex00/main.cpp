/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:42:27 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/31 14:20:35 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
        
    easyfind(vec, 1);
    easyfind(vec, 2);
    easyfind(vec, 3);
    easyfind(vec, 4);
    easyfind(vec, 5);
    easyfind(vec, 6);
    easyfind(vec, 7);
    easyfind(vec, 8);
    easyfind(vec, 2);
    easyfind(vec, 1);
    easyfind(vec, 0);
    easyfind(vec, -1);
    easyfind(vec, 42);
    
    return (0);
}