/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:09:16 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 16:55:54 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        std::string const Name;
        bool Sign;
        int const GradeSign;
        int const GradeExec;
        Form();
    public:
        Form(std::string name, int gradeSign, int gradeExec);
        Form(const Form &src);
        Form &operator =(const Form &rhs);
        ~Form(void);
        
        std::string getName() const;
        bool getSignedRes() const;
        void setSignedRes(bool signRes);
        int  getGradeToSign() const;
        int getGradeToExec() const;
        void beSigned(Bureaucrat &bureaucrat);

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

    std::ostream & operator<<(std::ostream &o, Form const &i);

#endif