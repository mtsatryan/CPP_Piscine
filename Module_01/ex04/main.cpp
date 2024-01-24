/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:32:26 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/13 16:52:28 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	foo(std::string str, std::string s1, std::string s2)
{

	int i;

	i = str.find(s1);

	while (i != -1 && s1.length())
	{
		str.erase(i, s1.length());
		str.insert(i, s2);
		i = str.find(s1, i + s2.length());
	}
	return (str);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (1);

	std::ifstream	ifs(av[1]);
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		str;
	if (ifs.fail())
		return (1);
	std::cout << "s1 = " << s1 << std::endl;
	std::cout << "s2 = " << s2 << std::endl;

	std::ofstream	ofs("filename.replace");
	while (std::getline(ifs, str))
				ofs << foo(str, s1, s2) << std::endl;
	ofs.close();
	ifs.close();
	return (0);
}
