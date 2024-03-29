/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:29:12 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/01 21:12:00 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)   {
/*-------------------------------------------------------------*/
        if (this != &copy)
        *this = copy;
/*------------------------------------------------------------*/}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)   {
/*-------------------------------------------------------------------------*/
    if (this == &other)
        return (*this);
    return (*this);
/*-------------------------------------------------------------------------*/}

bool ScalarConverter::isChar(const std::string &str){return str.length() == 1 && !std::isdigit(str[0]);}

void    ScalarConverter::convertChar(const std::string &str) {
/*----------------------------------------------------------*/
    char    c = str[0];
    if (c >= 0 && c <= 127)
	{
        if (isprint(c) == 0)
                std::cout << "char:   Non displayable" << std::endl;
        else
            std::cout << "char:   " << c << std::endl;
    }
    else
        std::cout << "char:   impossible" << std::endl;
    std::cout << "int:    " << static_cast<int>(c) << std::endl;
    std::cout << "float:  " << static_cast<float>(c)  <<".0f"<< std::endl;
    std::cout << "double: " << static_cast<double>(c) <<".0"<< std::endl;
/*---------------------------------------------------------*/}

bool ScalarConverter::isInt(const std::string &str)   {
/*---------------------------------------------------*/
    std::istringstream iss(str);
    int n;
    iss >> n;
    return !iss.fail() && iss.eof();
/*--------------------------------------------------*/}

void ScalarConverter::convertInt(const std::string &str)  {
/*-------------------------------------------------------*/
    int n = std::atoi(str.c_str());
    
    if (n < -128 || n > 127)
        std::cout << "char:   impossible" << std::endl;
    else if (n >= 32 && n < 127)
        std::cout << "char:   " << static_cast<char>(n) <<  std::endl;  
    else
        std::cout << "char:   Non displayable" << std::endl;
    std::cout << "int:    " << static_cast<int>(n) << std::endl;
    std::cout << "double: " << static_cast<double>(n) <<".0"<< std::endl;
    std::cout << "float:  " << static_cast<float>(n) <<".0f"<< std::endl;
/*------------------------------------------------------*/}

bool ScalarConverter::isFloat(const std::string &str) {
/*---------------------------------------------------*/
    const char* cstr = str.c_str();
    char* endptr;
    std::strtof(cstr, &endptr);
    if (endptr == cstr)
        return false;
    while (*endptr != '\0')
    {
        if (*endptr != 'f')
            return false;
        ++endptr;
    }
    return true;
/*--------------------------------------------------*/}

bool pl(const std::string &str)
{
    if (str == "inf" || str == "+inf" || str == "-inf" || str == "inff" || str == "+inff" || str == "-inff" || str == "nan" || str == "nanf")
        return true;
    return false;
}

void ScalarConverter::convertFloat(const std::string &str) {
/*--------------------------------------------------------*/
    double number = std::strtod(str.c_str(), NULL);

    if (pl(str) || number < -128 || number > 127)
        std::cout << "char: impossible" << std::endl;
    else if (number >= 32 && number < 127)
        std::cout << "char: " << static_cast<char>(number) <<  std::endl;
    else
        std::cout << "char: Non Displayable" << std::endl;
    if (pl(str) || number > INT_MAX || number < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(number) << std::endl;
    std::cout << "float: "  << static_cast<float>(number)  <<"f"<< std::endl;
    std::cout << "double: " << static_cast<double>(number) << std::endl;
/*-------------------------------------------------------*/}

bool ScalarConverter::isDouble(const std::string &str) {
/*----------------------------------------------------*/
    const char* cstr = str.c_str();
    char* endptr;
    std::strtod(cstr, &endptr);
    if (endptr == cstr)
        return false;
    while (*endptr != '\0')
    {
        if (*endptr != 'f')
            return false;
        ++endptr;
    }
    return true;
/*---------------------------------------------------*/}

void ScalarConverter::convertDouble(const std::string &str) {
/*---------------------------------------------------------*/
    double number = std::strtod(str.c_str(), NULL);

    if (pl(str) || number < -128 || number > 127)
        std::cout << "char: impossible" << std::endl;
    else if (number >= 32 && number < 127)
        std::cout << "char: " << static_cast<char>(number) <<  std::endl;
    else
        std::cout << "char: Non Displayable" << std::endl;
    if (pl(str) || number > INT_MAX || number < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: "    << static_cast<int>(number) << std::endl;
    std::cout << "float: "  << static_cast<float>(number)  <<"f"<< std::endl;
    std::cout << "double: " << number << std::endl;
/*--------------------------------------------------------*/}


void ScalarConverter::convert(const std::string &str)   {
/*-----------------------------------------------------*/
    if (isChar(str))
        convertChar(str);
    else if (isInt(str))
        convertInt(str);
    else if (isFloat(str))
        convertFloat(str);
    else if (isDouble(str))
        convertDouble(str);
    else
        std::cout << "Invalid input: " << "[" << RED << str << RESET << "]" << std::endl;
/*----------------------------------------------------*/}
