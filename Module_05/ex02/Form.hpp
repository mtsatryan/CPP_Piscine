/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:09:16 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 18:39:44 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
   private:

	const std::string _name;
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExecute;
	std::string _target;
	Form();

public:
	Form(std::string name, int gradeToSign, int gradeToExecute);
	virtual ~Form();
	Form(Form const & src);
	Form & operator=(Form const & rhs);

	std::string getName() const;
	bool getSignedResult() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat & bureaucrat);

	void execute(Bureaucrat const & executor) const;
	virtual void executeForm() const = 0;
	bool checkFormSignedStatus() const;
	bool checkFormExecuteGrade(Bureaucrat const & executor) const;

	void setFormTarget(std::string target);
	std::string getFormTarget() const;
	void setSignedResult(bool signedResult);


	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("<Form> Grade too high (smaller than 1).");
			}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("<Form> Grade too low (bigger than 150).");
		}
	};

};

std::ostream & operator<<(std::ostream & o, Form const & form);

#endif