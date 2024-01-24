/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:16:40 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:07:52 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal*	idefix = new Dog();
	Animal*	garfield = new Cat();
	//Animal* 	b = new Animal(); // ERROR:Animal is abstract

	idefix->makeSound();
	garfield->makeSound();
	return (0);
}