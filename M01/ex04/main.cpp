/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:33:13 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/08 16:57:59 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Losers.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
       std::cout << "❌ type ./losers filename str1 str2" << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    Losers losers(filename);
    losers.replace(s1, s2);
    return (0);
}
