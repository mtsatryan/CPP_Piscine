/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:16:40 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:08:27 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
		// My test
	std::cout << "---- My test ----" << std::endl;
	Animal	*tab_animal[100];
	int		i;
	i = -1;
	while (++i <= 100)
	{
		if (i % 2)
		{
			tab_animal[i] = new Dog();
			std::cout << i << '\n';
		}
		else
		{
			tab_animal[i] = new Cat();
			std::cout << i << '\n';
		}
	}
	i--;
	std::cout << std::endl;
	while (i >= 0)
	{
		delete tab_animal[i];
		i--;
	}
	std::cout << std::endl;
	
	// Deep Copy Test
	std::cout << "---- Deep copy test ----" << std::endl;
	Dog		basic;
	Dog tmp = basic;
	std::cout << std::endl;

	// Subject test
	std::cout << "---- Subject test 1----" << std::endl;
	const Animal* j = new Dog();
	std::cout << "---- Subject test 2----" << std::endl;
	const Animal* k = new Cat();
	std::cout << "---- Subject test 3----" << std::endl;
	std::cout << std::endl;
	std::cout << "---- Subject test 4----" << std::endl;
	delete j;
	std::cout << "---- Subject test 5----" << std::endl;
	delete k;
	std::cout << "---- Subject test 6----" << std::endl;
	return (0);
}