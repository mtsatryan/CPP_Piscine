/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:58:41 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/24 18:47:25 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery creation", 145, 137){
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
		Form("shrubbery creation", 145, 137)
{
	this->setFormTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute()){
	std::cout << "<ShrubberyCreationForm> copy constructor is called." << std::endl;
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	if (this != &rhs)
	{
		this->setSignedResult(rhs.getSignedResult());
		this->setFormTarget(rhs.getFormTarget());
	}
	return *this;
}

void ShrubberyCreationForm::executeForm() const {
	std::ifstream inFile;
	inFile.open("ascii.txt");
	if (!inFile)
		std::cout << "Open file error." << std::endl;

	std::string fileName = this->getFormTarget() + "_shrubbery";

	std::ofstream outFile(fileName.c_str());
	if (!outFile)
		std::cout << "Create file error." << std::endl;

	std::string line;

	while(getline(inFile, line))
		outFile << line << std::endl;
	outFile.close();
	inFile.close();
}