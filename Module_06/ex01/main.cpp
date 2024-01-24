/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 23:48:29 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/25 23:51:58 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "data.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
  return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
    Data		*data;
	uintptr_t	serialized;
	Data		*deserialized;

	data = new Data();
	data->x = 42;
	data->y = 21;

	std::cout << "Data address\t\t[ data ]\t\t\t:\t" << data << std::endl;
	std::cout << "Data values\t\t[ data->x, data->y]\t\t:\t"
			  << data->x << ", " << data->y << std::endl;
	std::cout << std::endl;

	serialized = serialize(data);
	std::cout << "serialize\t\t[ serialize(data) ]\t\t:\t" << serialized << std::endl;
	std::cout << std::endl;

	deserialized = deserialize(serialized);
	std::cout << "deserialized\t\t[ deserialize(serialized) ]\t:\t" << deserialized << std::endl;
	std::cout << "Data values\t\t[ data->x, data->y]\t\t:\t"
			  << data->x << ", " << data->y << std::endl;

	delete data;
	return (0);
}