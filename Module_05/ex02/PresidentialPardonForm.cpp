/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:58:30 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 18:47:05 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 25, 5){
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("presidential pardon", 25, 5)
{
	this->setFormTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute()){
	std::cout << "<PresidentialPardonForm> copy constructor is called." << std::endl;
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	if (this != &rhs)
	{
		this->setSignedResult(rhs.getSignedResult());
		this->setFormTarget(rhs.getFormTarget());
	}
	return *this;
}

void PresidentialPardonForm::executeForm() const {
	std::cout << this->getFormTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}