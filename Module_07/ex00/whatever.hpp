/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:59:38 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/27 18:41:38 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
const T& max(const T& a, const T& b)
{
    return (a >= b) ? a : b;
}

template <typename T>
const T&    min(const T& a, const T& b)
{
    return (a <=  b) ? a: b;
}

template <typename T>
void    swap(T& a, T& b)
{
   	T tmp;

	tmp = a;
	a = b;
    b = tmp;
}

#endif