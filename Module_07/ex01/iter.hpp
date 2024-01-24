/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:59:38 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/27 18:49:14 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void    iter(T *array, int arlen, void (*foo)(T const &))
{
    if (array)
        for (int i = 0; i < arlen; i++)
            foo(array[i]);
}

#endif