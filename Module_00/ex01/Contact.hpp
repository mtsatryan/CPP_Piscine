/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:07:00 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/11 22:55:26 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
using std::string;

class Contact
{
	public:
			Contact(void);
			~Contact(void);
			
			string	getFname(void);
			string	getLname(void);
			string	getNname(void);
			string	getPnum(void);
			string	getDsecret(void);

			void	setFname(string fn);
			void	setLname(string ln);
			void	setNname(string nn);
			void	setPnum(string	pn);
			void	setDsecret(string ds);

	private:
			string	Fname;
			string	Lname;
			string	Nname;
			string	Pnum;
			string	Dsecret;
};
