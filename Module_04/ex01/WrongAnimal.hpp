/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:55:07 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:08:31 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

#include <string>
#include <iostream>

class   WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal &operator=(WrongAnimal const &rhs);
        void setType(std::string Type);
        std::string getType(void) const;
        void makeSound(void) const;
        ~WrongAnimal(void);
};

#endif