/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <mtsatrya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:02:08 by mtsatrya          #+#    #+#             */
/*   Updated: 2022/08/26 18:47:39 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool    ft_isInt(std::string input)
{
    size_t i = 0;

    if (input.length() == 1 && isdigit(input[0]))
            return true;
    while (i < input.length())
    {
        if (input[i] == '-' && i == 0)
            i++;
        if (!isdigit(input[0]))
            return false;
        i++;
    }
    return true;
}

bool    ft_isChar(std::string input)
{
    if (input.length() == 1 && isalpha(input[0]))
        return true;
    return false;
}

// bool checkFloat(std::string input)
// {
//     if (input.compare("-inff") == 0 | input.compare("+inff") == 0 | input.compare("nanf") == 0)
//         return true;
//     return false;
// }

bool    ft_isFloat(std::string input)
{
    int size;
    int dot;
    bool neg;
    
    dot = 0;
    size = input.length();
    // if (checkFloat(input))
    //     return true;
    for (int i =  0; i < size; i++)
    {
        if (input[i] == '.')
            dot++;
    }
    neg = false;
    for (int i = 0; i < size; i++)
    {
        if (input[i] == '-' && i == 0)
        {
            i++;
            neg = true;
        }
        if ((i == 0 && input[i] == '.' && neg == false) | (i == 1 && input[i] == '.' && neg == true))
            return false;
        if (dot != 1)
            return false;
        if (i == (size - 2) && input[i] == '.')
            return false;
        if (!isdigit(input[i]) && input[i] != '.' && i != size - 1)
            return false;
        if (input[size - 1] != 'f')
            return false;
    }
    return true;
}

// bool checkDouble(std::string input)
// {
//     if (input.compare("-inf") == 0 | input.compare("+inf") == 0 | input.compare("nan") == 0)
//         return true;
//     return false;
// }

bool    ft_isDouble(std::string input)
{
    int size;
    int dot;
    bool neg;
    
    dot = 0;
    size = input.length();
    // if (checkDouble(input))
    //     return true;
    for (int i =  0; i < size; i++)
    {
        if (input[i] == '.')
            dot++;
    }
    neg = false;
    for (int i = 0; i < size; i++)
    {
        if (input[i] == '-' && i == 0)
        {
            i++;
            neg = true;
        }
        if ((i == 0 && input[i] == '.' && neg == false) | (i == 1 && input[i] == '.' && neg == true))
            return false;
        if (dot != 1)
            return false;
        if (i == (size - 1) && input[i] == '.')
            return false;
        if (!isdigit(input[i]) && input[i] != '.')
            return false;
    }
    return true;
}

int ft_check_arg(const std::string &input)
{
    int i = 0;
    if (ft_isDouble(input) == true)
        i = 4;
    else if (ft_isChar(input) == true)
        i = 2;
    else if (ft_isFloat(input) == true)
        i = 3;
    else if (ft_isInt(input) == true)
        i = 1;
    else 
        i = 0;
    return (i);
}

int		ft_isprint(char c)
{
	return (c >= 0x20 && c <= 0x7e);
}

void   castToChar(std::string input, int num)
{
    if (num == 2)
    {
        if (!ft_isprint(input[0]))
            std::cout << "char: Non displayable\n";
        else if (ft_isprint(input[0]))
            std::cout << "char: " << input[0] << std::endl;
    }
    else if (num == 1)
    {
        if (!ft_isprint(stoi(input)))
            std::cout << "char: Non displayable\n";
        else if (ft_isprint(stoi(input)))
            std::cout << "char: " << static_cast<char>(stoi(input)) << std::endl;
    }
    else if (num == 3)
    {
       if (input.size() == 1)
        {
            std::cout << "float: " << static_cast<float>(input[0]) << "\n";
        }
        else 
            std::cout << "char: impossible\n";
    }
    else if (num == 4)
    {
        if (input.size() == 1)
            std::cout << "double: " << static_cast<double>(input[0]) << "\n";
        else 
            std::cout << "char: impossible\n";
    }
}

void     castToInt(std::string input, int num)
{
    if (num == 2)
    {
        if (input.size() == 1)
            std::cout << "int: " << static_cast<int>(input[0]) << "\n";
        else 
            std::cout << "int: impossible\n";
    }
    else 
        std::cout << "int: " << stoi(input) << std::endl;
}

void   castToFloat(std::string input, int num)
{
    if (num == 2)
    {
        if (input.size() == 1)
            std::cout << "float: " << static_cast<float>(input[0]) << ".0f\n";
        else 
            std::cout << "float: impossible\n";
    }
    else
    {
        float res;
        res = stof(input);
        std::cout << std::setprecision(1) << std::fixed << "float: "  << static_cast<float>(res) << "f" << std::endl;   
    }
}

void castToDouble(std::string input, int num)
{
    double res;
    if (num == 1)
    {   
        std::cout << "double: " << input << ".0" << std::endl;   
    }
    else if (num == 2) 
    {
        res = static_cast<double>(input[0]);
        std::cout << std::setprecision(1) << std::fixed << "double: " << res << std::endl;   
    }
    else if (num == 3)
    {
        res = stod(input);
        std::cout << std::setprecision(1) << std::fixed << "double: " << res << std::endl;   
    }
    else if (num == 4)
    {
        res = stod(input);
        std::cout << std::setprecision(1) << std::fixed  << "double: " << res << std::endl;
    }
}

void check_nan_or_inf(std::string input)
{
    if (input.compare(0, 4, "-inf") == 0)
        std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf\n";
    else if(input.compare(0, 4, "+inf") == 0)
        std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf\n";
    else if(input.compare(0, 3, "nan") == 0)
        std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
    
}

int     main(int ac, char **av)
{
    int num;
    

    if (ac != 2)
    {
        std::cout << "Bad args" << std::endl;
        return (-1);   
    }
    std::string input = av[1];
    if (input.compare(0 , 4, "-inf") == 0 | input.compare(0, 4, "+inf") == 0 | input.compare(0, 3, "nan") == 0)
    {
        check_nan_or_inf(av[1]);
        return (0);
    }
    num = ft_check_arg(av[1]);
    if (num == 0)
    {
        std::cout << "Bad input" << std::endl;
        return (-1);   
    }
    else
    {   
        castToChar(av[1], num);
        castToInt(av[1], num);
        castToFloat(av[1], num);
        castToDouble(av[1], num);
    }
    return (0);
}