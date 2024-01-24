/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:30:30 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 16:55:58 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

static void
checkForm(Bureaucrat bureaucrat, Form format)
{
    try
    {
        bureaucrat.signForm(format);
        std::cout << bureaucrat << std::endl;
        std::cout << format << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return ;
}

int
main(void)
{
    Form        f1 = Form("A form", 42, 42);
    Form        f2 = Form("Another one...", 30, 50);
    Bureaucrat  b1 = Bureaucrat("Marvin", 42);
    Bureaucrat  b2 = Bureaucrat("Mr. Abraham", 1);

    checkForm(b1, f1);
    std::cout << std::endl;

    checkForm(b1, f2);
    std::cout << std::endl;

    checkForm(b2, f1);
    std::cout << std::endl;

    checkForm(b2, f2);
    std::cout << std::endl;
    return (0);
}