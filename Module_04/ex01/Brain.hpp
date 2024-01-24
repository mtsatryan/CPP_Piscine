/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:32:02 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:08:21 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string.h>
#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain(void);
    Brain(Brain const &src);
    Brain &operator=(Brain const &rhs);
    virtual ~Brain(void);
};

#endif