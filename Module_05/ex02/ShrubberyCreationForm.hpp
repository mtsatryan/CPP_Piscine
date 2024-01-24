/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:58:43 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 18:27:19 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

private:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

	virtual void executeForm() const;

};

#endif