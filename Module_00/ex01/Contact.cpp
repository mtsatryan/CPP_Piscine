/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:06:36 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/11 22:55:19 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){ }

Contact::~Contact(void){ }

string	Contact::getFname(void)
{
	return this->Fname;
}

string	Contact::getLname(void)
{
	return this->Lname;
}

string	Contact::getNname(void)
{
	return this->Nname;
}

string		Contact::getPnum(void)
{
	return this->Pnum;
}

string	Contact::getDsecret(void)
{
	return this->Dsecret;
}

void	Contact::setFname(string fn)
{
	this->Fname = fn;
}

void	Contact::setLname(string ln)
{
	this->Lname = ln;
}

void	Contact::setNname(string nn)
{
	this->Nname = nn;
}

void	Contact::setPnum(string pn)
{
	this->Pnum = pn;
}

void	Contact::setDsecret(string ds)
{
	this->Dsecret = ds;
}

