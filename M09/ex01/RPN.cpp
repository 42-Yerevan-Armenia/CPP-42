/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:14:41 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/16 18:09:36 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Calculator::Calculator(){};
Calculator::~Calculator(){};
Calculator::Calculator(const Calculator &copy){}

Calculator	&Calculator::operator=(const Calculator &other) {
/*---------------------------------------------------------*/
	if (this == &other)
		return *this;
	return (*this);
/*--------------------------------------------------------*/}

bool Calculator::isop(const std::string& token){return token == "+" || token == "-" || token == "*" || token == "/";}

int Calculator::operation(int num1, int num2, const std::string& op)    {
/*---------------------------------------------------------------------*/
    if (op == "+")
        return num1 + num2;
    else if (op == "-")
        return num1 - num2;
    else if (op == "*")
        return num1 * num2;
    else if (op == "/")
    {
        if (num2 == 0)
        {
            std::cout << "❌ Error: ⭕️" << std::endl;
            exit(1);
        }
        return num1 / num2;
    }
    std::cout << "❌ Error: Wrong input." << std::endl;
    exit(1);
/*--------------------------------------------------------------------*/}

bool Calculator::isValid(const std::string &str)    {
/*-------------------------------------------------*/
    for (size_t i = 0; i < str.size(); ++i)
    {
        char    c = str[i];
        if (std::isspace(c))
            continue;
        else if (std::isdigit(c))
            continue;
        else if (c == '+' || c == '-' || c == '*' || c == '/')
            continue;
        else
        {
            std::cerr << "❌ Error: Non-numeric input. " << std::endl;
            std::cout << CYAN << str.substr(0, i) << RED << c << CYAN << str.substr(i + 1) << RESET << std::endl;
            return false ;
        }
    }
    return true ;
/*------------------------------------------------*/}

int Calculator::calcule(const std::string &str)  {
/*----------------------------------------------*/
    if (!isValid(str))
        return (0); 
    std::stack<int>     stack;
    std::istringstream  iss(str);
    std::string         token;
    size_t              tokenindex = 0;
    while (iss >> token)
    {
        ++tokenindex;
        if (isop(token))
        {
            if (stack.size() < 2)
            {
                std::cout << "❌ Error: Missing number." << std::endl;
                std::string missingToken = str;
                size_t tokenStart = str.find(token);
                missingToken.insert(tokenStart, "\033[1;31m? \033[0;36m");
                std::cout << CYAN << missingToken << RESET << std::endl;
                return (0);
            }
            int num2 = stack.top();
            stack.pop();
            int num1 = stack.top();
            stack.pop();
            int res = operation(num1, num2, token);
            stack.push(res);
        }
        else
        {
            int op = atoi(token.c_str());
            if (op == 0 && token != "0")
            {
                std::cout << "❌ Error: Invalid token." << std::endl;
                return (0); 
            }
            stack.push(op);
        }
    }
    if (stack.size() != 1)
    {
        std::cout << "❌ Error: Missing operator." << std::endl;
        return (0);   
    }
    return stack.top();
/*---------------------------------------------*/}
