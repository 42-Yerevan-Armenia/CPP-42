/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:14:40 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/16 15:44:21 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << RED << "❌ Error: Invalid input." << RESET << std::endl;
        return (1);
    }
    std::string str = av[1];
    int result = Calculator::calcule(str);
    std::cout << result << std::endl;
    return (0);
}
