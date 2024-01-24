/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:55:47 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/31 22:23:33 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{ 
        public:
                MutantStack();
                MutantStack(MutantStack<T> const &src);
                MutantStack<T>&	operator=(MutantStack<T> const &src);
                typedef typename std::stack<T>::container_type::iterator    iterator;
                iterator begin();
                iterator end();
                virtual ~MutantStack();
};


#include "MutantStack_1.hpp"
#endif