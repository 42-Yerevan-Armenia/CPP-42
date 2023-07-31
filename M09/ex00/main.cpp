/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:14:34 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/31 20:23:49 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {    
        std::cout << RED << "Error: could not open file." << RESET << std::endl;
        return (1);
    }
    std::string filename = av[1];
    BitcoinExchange btc(filename);
    btc.exchange();

    return 0;
}
