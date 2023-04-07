/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:31:35 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/07 16:29:57 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPtr = &str;
    std::string &strRef = str;

    std::cout << RED << &str << RESET << std::endl;
    std::cout << GREEN << strPtr << RESET << std::endl;
    std::cout << YELLOW << &strRef << RESET << std::endl;
    std::cout << RED << str << RESET << std::endl;
    std::cout << GREEN << *strPtr << RESET << std::endl;
    std::cout << YELLOW << strRef << RESET << std::endl;

    return (0);
}
