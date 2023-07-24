/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <tumolabs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:29:12 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/23 19:23:48 by tumolabs         ###   ########.fr       */
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
    std::cout << "❌ " << str << std::endl;
    std::cout << "😅 " << n << std::endl;
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

bool is_finite(float value) {return value == value && std::fabs(value) != std::numeric_limits<float>::infinity();}
bool is_finite(double value) {return value == value && std::fabs(value) != std::numeric_limits<double>::infinity();}

void ScalarConverter::convertFloat(const std::string &str) {
/*--------------------------------------------------------*/
    float   f;
    if (str == "-inf")
        f = -std::numeric_limits<float>::infinity();
    else if (str == "+inf")
        f = std::numeric_limits<float>::infinity();
    else if (str == "nan")
        f = std::numeric_limits<float>::quiet_NaN();
    else
        f = std::atof(str.c_str());
    char    c = static_cast<char>(f);
    double  d = static_cast<double>(f);

    if (!is_finite(f))
    {
        std::cout << "char:   impossible" << std::endl;
        std::cout << "int:    impossible" << std::endl;
    } 
    else
    {
        int n = static_cast<int>(f);
        if (std::isprint(c))
            std::cout << "char:   " << c << std::endl;
        else
            std::cout << "char:   Non displayable" << std::endl;

        std::cout << "int:    " << n << std::endl;
    }
    std::cout << "float:  " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
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
    double  d;

    if (str == "-inf")
        d = -std::numeric_limits<double>::infinity();
    else if (str == "+inf")
        d = std::numeric_limits<double>::infinity();
    else if (str == "nan")
        d = std::numeric_limits<double>::quiet_NaN();
    else
        d = std::atof(str.c_str());
    char    c = static_cast<char>(d);
    float   f = static_cast<float>(d);
    int     n = static_cast<int>(d);
    if (!is_finite(d))
    {
        std::cout << "char:   impossible" << std::endl;
        std::cout << "int:    impossible" << std::endl;
    } 
    else
    {
        if (std::isprint(c))
            std::cout << "char:   " << c << std::endl;
        else
            std::cout << "char:   Non displayable" << std::endl;

        std::cout << "int:    " << n << std::endl;
    }
    std::cout << "float:  " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
/*--------------------------------------------------------*/}


void ScalarConverter::convert(const std::string &str)   {
/*-----------------------------------------------------*/
    if (str.empty())
        std::cout << "Invalid input: empty string" << std::endl;
    if (isChar(str))
        convertChar(str);
    else if (isInt(str))
        convertInt(str);
    else if (isFloat(str))
        convertFloat(str);
    else if (isDouble(str))
        convertDouble(str);
    else
        std::cout << "Invalid input: " << str << std::endl;
/*----------------------------------------------------*/}
