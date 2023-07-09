/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:27:35 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/09 16:08:15 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <sstream>

class ScalarConverter  {

    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter();

        static void convert(const std::string &str);

    private:
        
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
