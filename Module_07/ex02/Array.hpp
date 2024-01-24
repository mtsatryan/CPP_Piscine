/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:42:04 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/29 19:45:25 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
    private:
        T       *a;
        size_t     n;
    public:
        Array(void);                        
        Array(unsigned int n);              
        Array &operator=(Array<T> const &rhs);
        T &operator[](unsigned int i) const;
        Array(Array<T> const &src);
        unsigned int size();
        ~Array(void);
};

#include "Array.tpp"

#endif