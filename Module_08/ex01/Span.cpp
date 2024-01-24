/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:31:22 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/31 17:42:36 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
    std::cout << "Standart constructor called" << std::endl;
}

Span::Span(size_t n) : N(n)
{
       std::cout << "Standart constructor called with " << this->N << " capacity" << std::endl;
}

Span::Span(Span const &src) : N(src.N)
{
    this->numbers.clear();
    this->numbers = src.numbers;
    std::cout << "Copy constructor called" << std::endl;
}

Span &Span::operator=(Span const & rhs)
{
    this->N = rhs.N;
    this->numbers.clear();
    this->numbers = rhs.numbers;
    return (*this);
}


void Span::addNumber(int num)
{
    if (this->numbers.size() == this->N)
        throw Span::FullSpanException();
    this->numbers.insert(num);
}

size_t Span::shortestSpan(void) const
{
    size_t size = this->numbers.size();
    if (size <= 1)
        throw Span::NotEnoughNumsException();
    
    std::multiset<int>::iterator first = this->numbers.begin();
    std::multiset<int>::iterator next = ++this->numbers.begin();
    size_t mindif = std::abs(*next++ - *first++);
    while (next != this->numbers.end())
    {
        size_t dif = std::abs(*next - *first);
        if (dif < mindif)
            mindif = dif;
        first++;
        next++;
    }
    return (mindif);
}

const char* Span::FullSpanException::what() const throw()
{
	return "SpanException: Span is already full";
}

const char* Span::NotEnoughNumsException::what() const throw()
{
	return "SpanException: not enough numbers in Span";
}

size_t Span::longestSpan(void) const
{
    if (this->numbers.size() <= 1)
        throw Span::NotEnoughNumsException();
    
    int big = *std::max_element(this->numbers.begin(), this->numbers.end());
    int smal = *std::min_element(this->numbers.begin(), this->numbers.end());
    
    return(std::abs(big - smal));
}

Span::~Span()
{
    this->numbers.clear();
}