/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:20:46 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/03 17:20:49 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*ft_strupcase(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	return (str);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
	else
	{
		while (av[++i])
			std::cout << ft_strupcase(av[i]);
		std::cout << std::endl; 
	}
	
	return (0);
}
