/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:34:39 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 16:56:00 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name), Grade(grade)
{
    try 
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
        catch (const Bureaucrat::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
    std::cout << "* Bureaucrat <" << this->getName() << "> is born. *" << std::endl;
}

void            Bureaucrat::setGrade(int grade)
{
    this->Grade = grade;
}

std::string     Bureaucrat::getName(void) const
{
    return this->Name;
}

int             Bureaucrat::getGrade(void) const
{
    return this->Grade;   
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : Name(src.getName()), Grade(src.getGrade())
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator =(const Bureaucrat &rhs)
{
    std::cout << "Bureaucrat assignation constructor called." << std::endl;
    if (this != &rhs)
        this->Grade = rhs.getGrade();
    return *this;
}

void Bureaucrat::incrementGrade(int i)
{
    try
    {
        if (this->getGrade() - i < 1)
        {
            throw Bureaucrat::GradeTooHighException();
        }
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
        return;
    }
    this->setGrade(this->getGrade() - i);
}

void Bureaucrat::decrementGrade(int i)
{
    try
    {
        if (this->getGrade() + i > 150)
        {
            throw Bureaucrat::GradeTooLowException();
        }
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
        return;
    }
    this->setGrade(this->getGrade() + i);
}

void Bureaucrat::signForm(Form &form)
{
    if (form.getGradeToSign() >= this->getGrade())
	{
		form.setSignedRes(true);
		std::cout << "<" << this->getName() << "> signs <" << form.getName() << ">" << std::endl;
	}
	else
		std::cout << "<" << this->getName() << "> cannot sign <" << form.getName() << "> because <the bureaucrat's grade is lower than the form's grade to sign>" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Default destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &i)
{
	o << i.getName() << ", bureaucrat grade <" << i.getGrade() << ">." << std::endl;
	return (o);
}