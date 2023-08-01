/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:27:35 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/01 21:11:07 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <sstream>

class ScalarConverter  {

    public:

        static void convert(const std::string &str);

    private:
        
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter();

        static bool isInt(const std::string& str);
        static bool isChar(const std::string& str);
        static bool isFloat(const std::string& str);
        static bool isDouble(const std::string& str);
        static void convertChar(const std::string& str);
        static void convertInt(const std::string& str);
        static void convertFloat(const std::string& str);
        static void convertDouble(const std::string& str);
                        };
#endif
