/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack_1.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:00:55 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/31 22:23:06 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() { }

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src)
{
    *this = src; 
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (this->c.end());
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack<T> const & src)
{
    static_cast < std::stack<T> > (*this) = static_cast < std::stack<T> > (src);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {  }