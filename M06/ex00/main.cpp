/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:29:32 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/09 11:32:50 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "❌ ./scalar [argument]" << std::endl;
    else
    {
        std::string str(av[1]);
        ScalarConverter::convert(str);        
    }
    return (0);
}
