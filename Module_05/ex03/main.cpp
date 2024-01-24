/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:30:30 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 19:04:13 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void)
{
	Intern randomIntern;

	Form* form1 = randomIntern.makeForm("presidential pardon", "dog");
	Form* form2 = randomIntern.makeForm("robotomy request", "cat");
	Form* form3 = randomIntern.makeForm("shrubbery creation", "fish");
	Form* form4 = randomIntern.makeForm("shrubbery", "no");

	std::cout << "<" << form1->getName() << "> is created to target <"<< form1->getFormTarget() << ">." << std::endl;
	std::cout << "<" << form2->getName() << "> is created to target <"<< form2->getFormTarget() << ">." << std::endl;
	std::cout << "<" << form2->getName() << "> is created to target <"<< form2->getFormTarget() << ">." << std::endl;

	delete form1;
	delete form2;
	delete form3;
	delete form4;
}