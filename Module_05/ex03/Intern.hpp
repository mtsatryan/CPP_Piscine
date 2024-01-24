/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:50:53 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 18:56:21 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
            Intern();
           	Intern(Intern const & src);
	        Intern & operator=(Intern const & rhs);
            ~Intern();

            Form*   makeForm(std::string formName, std::string targetForm);
            Form*   createPP(std::string targetForm);
            Form*   createRR(std::string targetForm);
            Form*   createSC(std::string targetForm);
};

#endif

typedef Form* (Intern::*createFormFunction)(std::string formTarget);