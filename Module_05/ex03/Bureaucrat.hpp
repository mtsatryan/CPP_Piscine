/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:11:32 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 18:46:41 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;
class Bureaucrat {

private:
	const std::string _name;
	int	_grade;
	Bureaucrat();

public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator=(Bureaucrat const & rhs);

	std::string getName() const;
	int	getGrade() const;
	void setGrade(int);
	void incrementGrade(int);
	void decrementGrade(int);

	void signForm(Form & form);
	void executeForm(Form const & form);

	class GradeTooHighException : public std::exception
	{
	public:
		const char * what () const throw ()
		{
			return ("Grade is too high (smaller than 1).");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char * what () const throw ()
		{
			return ("Grade is too low (bigger than 150).");
		}
	};

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif