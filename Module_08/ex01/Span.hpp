/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:19:39 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/31 17:44:57 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <set>
#include <list>
#include <vector>
#include <algorithm>

class Span
{
private:
        Span();
        size_t N;
        std::multiset<int> numbers;
public:
    Span(size_t n);
    Span(Span const &src);
	Span &operator=(Span const & rhs);
    virtual ~Span();
    
    class FullSpanException: public std::exception
    {
        virtual const char* what() const throw();  
    };

    class NotEnoughNumsException: public std::exception
    {
        virtual const char* what() const throw();  
    };

    void addNumber(int num);
    template<typename InputIterator>
    void    addNumber(InputIterator begin, InputIterator end);
    size_t shortestSpan() const;
    size_t longestSpan() const;
};

#include "Span.ipp"

#endif