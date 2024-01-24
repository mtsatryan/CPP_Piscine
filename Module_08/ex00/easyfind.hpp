/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:04:48 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/31 14:20:20 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <algorithm>
#include <exception>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>

template <typename T>
void     easyfind(const T& param, int i)
{
    if (std::find(param.begin(), param.end(), i) != param.end())
        std::cout << "Found elem " << i << std::endl;
    else
        std::cout << "integer not found\n";
}

#endif
