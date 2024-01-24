/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:16:33 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:08:44 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class   Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(std::string type);
        Animal(Animal const &);
        Animal &operator=(Animal const &);
        void setType(std::string Type);
        std::string getType(void) const;
        virtual void makeSound(void) const;
        virtual~Animal(void);
};

#endif