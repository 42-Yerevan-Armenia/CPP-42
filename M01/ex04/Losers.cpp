/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Losers.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:46:49 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/08 16:59:51 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Losers.hpp"

Losers::Losers(std::string &filename): _in(filename)
{
    this->_out = this->_in + ".replace";
    std::cout << GREEN << "Filename  = " << filename << RESET << std::endl;
}

Losers::~Losers(void){}

void    Losers::replace(std::string &s1, std::string &s2)
{
    std::cout << YELLOW << "String s1 = " << s1 << RESET << std::endl;
    std::cout << YELLOW << "String s2 = " << s2 << RESET << std::endl;
}
