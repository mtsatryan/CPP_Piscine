/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:11:32 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 16:56:03 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
        std::string const   Name;
        int                 Grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator =(const Bureaucrat &rhs);
        
        void            setGrade(int grade);
        std::string     getName(void) const;
        int             getGrade(void) const;
        void incrementGrade(int);
	    void decrementGrade(int);
        
        void signForm(Form & form);
        
        ~Bureaucrat(void);
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade is too high (smaller than 1).");   
                }
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Grade is too low (greater than 150).");   
                }
        };
};

    std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif