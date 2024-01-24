/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:37:09 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:08:26 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *dogBrain;
    public:
        Dog(void);
        Dog(Dog const &src);
        Dog &operator=(Dog const &rhs);
        virtual void makeSound(void) const;
        ~Dog(void);
};
