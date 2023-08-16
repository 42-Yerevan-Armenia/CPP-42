/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:14:42 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/16 15:49:12 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#include <iostream>
#include <string>
#include <sstream>
#include <stack>

class Calculator   {

    public:
        Calculator();
        Calculator(const Calculator &copy);
        Calculator &operator=(const Calculator &other);
        ~Calculator();
        static bool isValid(const std::string &str);
        static int  calcule(const std::string &str);

    private:
        static bool isop(const std::string &token);
        static int  operation(int num1, int num2, const std::string &op);
                        };
#endif
