/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:34:39 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 18:46:32 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("null"), _grade(0){
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	try {
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
	}
	catch (const GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "* Bureaucrat <" << this->getName() << "> is born. *" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "* Bureaucrat <" << this->getName() << "> is destroyed. *" << std::endl;

}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()), _grade(src.getGrade()){
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	std::cout  << "Bureaucrat assignation constructor called."  << std::endl;
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

void Bureaucrat::setGrade(int grade) {
	this->_grade = grade;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::incrementGrade(int amount) {
	try
	{
		if (this->getGrade() - amount < 0) {
			throw Bureaucrat::GradeTooHighException();
		}
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
		return;
	}
	this->setGrade(this->getGrade() - amount);

}

void Bureaucrat::decrementGrade(int amount) {
	try {
		if (this->getGrade() + amount > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
		return;
	}
	this->setGrade(this->getGrade() + amount);
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &i) {
	o << i.getName() << ", bureaucrat grade <" << i.getGrade() << ">.";
	return o;
}

void Bureaucrat::signForm(Form &form) {
	if (form.getGradeToSign() >= this->getGrade())
	{
		form.setSignedResult(true);
		std::cout << "<" << this->getName() << "> signs <" << form.getName() << ">" << std::endl;
	}
	else
		std::cout << "<" << this->getName() << "> cannot sign <" << form.getName() << "> because the bureaucrat's grade is lower than the form's grade to sign>" << std::endl;
}

void Bureaucrat::executeForm(const Form &form) {

	if (!form.checkFormSignedStatus())
		std::cout << "<" << form.getName() << "> cannot be executed by <" << this->getName() << "> because the form is not signed." << std::endl;

	else if (!form.checkFormExecuteGrade(*this))
		std::cout << "<" << form.getName() << "> cannot be executed by <" << this->getName() << "> because the executor does not have a high enough score." << std::endl;

	else {
		std::cout << "<" << this->getName() << "> executes <" << form.getName() << ">." << std::endl;
		form.executeForm();
	}
}