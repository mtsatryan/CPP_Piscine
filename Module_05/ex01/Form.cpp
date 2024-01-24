/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:01:23 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 16:55:57 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() :
    Name("null"),
    Sign(false),
    GradeSign(0),
    GradeExec(0)
    { }

Form::Form(std::string name, int gradeSign, int gradeExec) :
    Name(name),
    GradeSign(gradeSign),
    GradeExec(gradeExec)
{
    try
    {
        if (this->getGradeToSign() < 1 || this->getGradeToExec() < 1)
            throw GradeTooHighException();
        else if (this->getGradeToSign() > 150 || this->getGradeToExec() > 150)
            throw GradeTooLowException();
    }
    catch (const GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (const GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "* Form <" << this->getName() << "> is created with <" << this->getGradeToSign() << "> grade to sign and <" << this->getGradeToExec() << "> to execute *" << std::endl;
}

Form::Form(const Form &src) :
    Name(src.getName()),
    Sign(src.getSignedRes()),
    GradeSign(src.getGradeToSign()),
    GradeExec(src.getGradeToExec())
{
    std::cout << "Form copy constructor is called." << std::endl;
    *this = src;
}

Form &Form::operator =(const Form &rhs)
{
    std::cout << "Form assignation constructor called." << std::endl;
    if (this != &rhs)
        this->Sign = rhs.getSignedRes();
    return *this;
}
        
std::string Form::getName() const
{
    return this->Name;

}
bool Form::getSignedRes() const
{
    return this->Sign;
}

void Form::setSignedRes(bool signRes)
{
    this->Sign = signRes;
}

int  Form::getGradeToSign() const
{
    return this->GradeSign;
}

int Form::getGradeToExec() const
{
    return this->GradeExec;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    try
    {
        if (this->getGradeToSign() < bureaucrat.getGrade())
            throw GradeTooLowException();
    }
    catch (const GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
		return;
    }
    if (this->getGradeToSign() >= bureaucrat.getGrade())
    {
        this->Sign = true;
        std::cout << "<" << this->getName() << "> is signed by <" << bureaucrat.getName() << ">" << std::endl;
    }
}

std::ostream & operator<<(std::ostream &o, Form const &i)
{
    if (i.getSignedRes())
		o << "Form <" << i.getName() << "> is signed.";
	else
		o << "Form <" << i.getName() << "> is not signed.";
	return o;
}

Form::~Form(void)
{
    std::cout << "* Form <" << this->getName() << "> is destroyed. *" << std::endl;
}