/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:16:40 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/20 21:08:50 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main() {
	const WrongAnimal* meta = new WrongAnimal(); 
	const WrongAnimal* i = new WrongCat();
	
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound(); //will output the cat sound! j->makeSound();
    
    
return 0; 
}


// int main(void)
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
	
// 	std::cout << std::endl;
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	std::cout << std::endl;
// 	i->makeSound();
// 	j->makeSound();
// 	meta->makeSound();
// 	std::cout << std::endl;
// 	delete(i);
// 	delete(j);
// 	delete(meta);
// 	std::cout << std::endl;

// 	// My tests
// 	Animal		Titi;
// 	Dog			Idefix;
// 	Cat			Garfield;
// 	WrongAnimal	Coffee;
// 	WrongCat	Grosminet;

// 	std::cout << std::endl;
// 	std::cout << Titi.getType() << std::endl;
//     std::cout << "Animal Sounds like: ";
// 	Titi.makeSound();
// 	std::cout << std::endl;
// 	std::cout << Idefix.getType() << std::endl;
// 	std::cout << "Dog Sounds like: ";
//     Idefix.makeSound();
// 	std::cout << std::endl;
// 	std::cout << Garfield.getType() << std::endl;
// 	std::cout << "Cat Sounds like: ";
//     Garfield.makeSound();
// 	std::cout << std::endl;
// 	std::cout << Coffee.getType() << std::endl;
//     std::cout << "WrongAnimal Sounds like: ";
// 	Coffee.makeSound();
// 	std::cout << std::endl;
// 	std::cout << Grosminet.getType() << std::endl;
//     std::cout << "WrongCat Sounds like: ";
// 	Grosminet.makeSound();
// 	std::cout << std::endl;

//     return (0);
// }