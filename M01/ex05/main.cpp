/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:39:06 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/10 18:40:07 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl        harl;
    std::string	cmd;

    std::cout << "Usage: " << CYAN << "DEBUG " << GREEN  << "INFO " << YELLOW << "WARNING " << RED << "ERROR " << RESET << "EXIT" << std::endl;
    while (true)
    {
        std::getline(std::cin, cmd);
        if (std::cin.eof())
        {
            std::cout << RED << "Exited" << RESET << std::endl;
            return (1);
        }
        if (cmd == "EXIT")
            return (0);
        harl.complain(cmd);
    }
    return (0);
}
