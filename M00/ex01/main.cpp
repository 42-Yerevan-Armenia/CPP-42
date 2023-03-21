/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:06:24 by arakhurs          #+#    #+#             */
/*   Updated: 2023/03/21 15:04:12 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    display()
{
    std::cout << BOLDYELLOW "🅜 🅨  🅐 🅦 🅔 🅢 🅞 🅜 🅔" << std::endl
	<< "🅟 🅗 🅞 🅝 🅔 🅑 🅞 🅞 🅚" GREEN << std::endl << std::endl
	<< "➊. 🅐 🅓 🅓" << std::endl
	<< "➋. 🅢 🅔 🅐 🅡 🅒 🅗" << std::endl
	<< "➌. 🅔 🅧 🅘 🅣" WHITE << std::endl << std::endl;
}

int main()
{
    PhoneBook pb;
    std::string cmd;

    display();
    while (1)
    {
        std::cout << CYAN "Enter " << GREEN "command " << CYAN "from up " << WHITE;
        getline(std::cin, cmd);
        if (cmd == "ADD" || cmd == "1")
            pb.add();
        else if (cmd == "SEARCH" || cmd == "2")
            pb.search();
        else if (cmd == "EXIT" || cmd == "3")
           break ;
        else
            std::cout << RED "❌ WRONG COMMAND" << std::endl;
        if (std::cin.eof())
            break ;
        // {
            // std::cout << std::endl;
			// return (1);
        // }
    }
    // std::cout << std::endl; 
    std::cout << MAGENTA "Phone Book closed" << std::endl;
    return (0);
}