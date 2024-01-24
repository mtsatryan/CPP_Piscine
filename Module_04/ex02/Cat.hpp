/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:37:05 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:07:49 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *catBrain;
    public:
        Cat(void);
        Cat(Cat const &src);
        Cat &operator=(Cat const &rhs);
        virtual void makeSound(void) const;
        ~Cat(void);
};