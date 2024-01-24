/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:56:27 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 19:01:40 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
// create a #define macro
#define CALL_CREATE_FORM(object, ptrToFunction) ((object).*(ptrToFunction))


Intern::Intern() {
	return;
}

Intern::~Intern() {
	return;
}

Intern::Intern(const Intern &src) {
	std::cout << "Intern copy constructor called." << std::endl;
	*this = src;
}

Intern &Intern::operator=(const Intern &rhs) {
	std::cout << "Intern assignation operator called." << std::endl;
	if (this != &rhs)
		return *this;
	return *this;
}

Form *Intern::makeForm(std::string formName, std::string formTarget) {

	std::string array[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	createFormFunction list[3] = {&Intern::createPP, &Intern::createRR, &Intern::createSC};

	for (int i = 0; i < 3; i++)
	{
		if (formName == array[i])
		{
			std::cout << "Intern creates <" << formName << ">." << std::endl;
			return CALL_CREATE_FORM(*this, list[i]) (formTarget);
		}
	}
	std::cout << "No matching form to create." << std::endl;
	return NULL;
}

Form *Intern::createPP(std::string formTarget) {
	return new PresidentialPardonForm(formTarget);
}

Form *Intern::createRR(std::string formTarget) {
	return new RobotomyRequestForm(formTarget);
}

Form *Intern::createSC(std::string formTarget) {
	return new ShrubberyCreationForm(formTarget);
}