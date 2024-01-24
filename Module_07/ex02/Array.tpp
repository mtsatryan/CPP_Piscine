/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:47:11 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/29 21:05:23 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : n(0)
{
    std::cout << "default constructor called." << std::endl;
    this->a = nullptr;
}

template <typename T>
Array<T>::Array(unsigned int n) : a(nullptr), n(n)
{
    this->a = new T[n];
    for (unsigned int i = 0; i < n; i++)
        this->a[i] = 0;
    std::cout << "An array have been created." << std::endl;
}

template <typename T>
Array<T>::Array(Array<T> const &src)
{
    std::cout << "copy constructor called." << std::endl;
    *this = src;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const
{
    if(i >= 0 && i < this->n)
        return(this->a[i]);
    else
        throw std::range_error("index out of bounds");
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
    this->a = nullptr;
    if (rhs.n > 0)
    {
        this->a = new T[rhs.n]();
        for (size_t i = 0; i < rhs.n; i++)
            this->a[i] = rhs.a[i];   
    }
    this->n = rhs.n;
    return *this;
}

template <typename T>
unsigned int Array<T>::size()
{
    return this->n;
}

template <typename T>
Array<T>::~Array(void)
{
    std::cout << "destructor called." << std::endl;
    if (n > 0)
        delete [] this->a;
}