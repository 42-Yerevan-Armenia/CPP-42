/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <tumolabs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:29:32 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/23 17:51:39 by tumolabs         ###   ########.fr       */
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
