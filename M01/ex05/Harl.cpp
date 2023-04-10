/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:39:03 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/10 18:45:17 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::complain(std::string level)   {
/*-----------------------------------------*/
    void    (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i;
    for(i = 0; i <= 4 && levels[i].compare(level); i++)
    {    while (i == 4)
            return ;
    }
    (this->*ptr[i])();
/*----------------------------------------*/}

void    Harl::debug(void){std::cout << CYAN << "🛄DEBUG🛄 - Let us debug this code 😃" << RESET << std::endl;}
void    Harl::info(void){std::cout << GREEN << "✅INFO✅ - Hmmm we need to debug deeper 🧐" << RESET << std::endl;}
void    Harl::warning(void){std::cout << YELLOW << "🚧WRNING🚧 - Debuger find something 🗿" << RESET << std::endl;}
void    Harl::error(void){std::cout << RED << "❌ERROR❌ - Oh no, segmentation fault 🤣" << RESET << std::endl;}
