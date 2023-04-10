/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:47:27 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/10 20:05:25 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl        harl;
    std::string	cmd = "";
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
      
	if (ac > 1)
		cmd = av[1];
    int i = 0;
    while (i < 4 and cmd.compare(levels[i]))
		i++;

    
    switch (i)
    {
        case 0:
            harl.complain(levels[0]);
        case 1:
            harl.complain(levels[1]);
        case 2:
            harl.complain(levels[2]);
        case 3:
            harl.complain(levels[3]);
            break;
        default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
}
