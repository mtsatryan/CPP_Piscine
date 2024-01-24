/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:01:23 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 18:53:00 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("null"), _signed(false), _gradeToSign(0), _gradeToExecute(0) {
	return;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){

	try
	{
		if (this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
			throw GradeTooHighException();
		else if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
			throw GradeTooLowException();
	}
	catch (const GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "* Form <" << this->getName() << "> is created with <" << this->getGradeToSign() << "> grade to sign and <" << this->getGradeToExecute() << "> to execute. *" << std::endl;
}

Form::~Form() {
	std::cout << "* Form <" << this->getName() << "> is destroyed. *" << std::endl;
}

Form::Form(const Form &src) : _name(src.getName()), _signed(src.getSignedResult()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) {
	std::cout << "Form copy constructor is called." << std::endl;
	*this = src;
}

Form &Form::operator=(const Form &rhs) {
	std::cout << "Form assignation operator is called." << std::endl;
	if (this != &rhs)
	{
		this->_signed = rhs.getSignedResult();
	}
	return *this;
}

std::string Form::getName() const {
	return this->_name;
}

bool Form::getSignedResult() const {
	return this->_signed;
}

int Form::getGradeToSign() const {
	return this->_gradeToSign;
}

int Form::getGradeToExecute() const {
	return this->_gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	try
	{
		if (this->getGradeToSign() < bureaucrat.getGrade())
			throw GradeTooLowException();
	}
	catch (const GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
		return;
	}
	if (this->getGradeToSign() >= bureaucrat.getGrade())
	{
		this->setSignedResult(true);
		std::cout << "<" << this->getName() << "> is signed by <" << bureaucrat.getName() << ">" << std::endl;
	}
}

bool Form::checkFormSignedStatus(void) const {

	if (this->getSignedResult())
		return true;
	return false;
}

bool Form::checkFormExecuteGrade(const Bureaucrat &executor) const {
	try
	{
		if (this->getGradeToExecute() < executor.getGrade())
			throw GradeTooLowException();
	}
	catch (const GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
		return false;
	}
	return true;
}

void Form::setFormTarget(std::string target) {
	this->_target = target;
}

std::string Form::getFormTarget() const {
	return this->_target;
}


void Form::setSignedResult(bool signedResult) {
	this->_signed = signedResult;
}

void Form::execute(const Bureaucrat &executor) const {
	if (!this->checkFormSignedStatus())
		std::cout << "<" << this->getName() << "> cannot be executed by <" << executor.getName() << "> because the form is not signed."  << std::endl;
	else if (!this->checkFormExecuteGrade(executor))
		std::cout << "<" << this->getName() << "> cannot be executed by <" << executor.getName() << "> because the executor does not have a high enough score." << std::endl;
	else
		executeForm();
}

std::ostream &operator<<(std::ostream &o, const Form &form) {
	if (form.getSignedResult())
		o << "Form <" << form.getName() << "> is signed.";
	else
		o << "Form <" << form.getName() << "> is not signed.";
	return o;
}