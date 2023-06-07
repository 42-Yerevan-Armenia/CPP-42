/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:05:54 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/04 18:16:56 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){std::cout << GREEN << "Default constructor for Ice" << RESET << std::endl;}
Ice::~Ice(){std::cout << RED << "Destructor for Ice 💀" << RESET << std::endl;}
Ice::Ice(const Ice &other) : AMateria(other)   {std::cout << YELLOW << "Copy constructor for Cure" << RESET << std::endl; *this = other;}

Ice    &Ice::operator=(const Ice &other)  {
/*---------------------------------------*/
    std::cout << CYAN << "Copy assignment operator for Ice" << RESET << std::endl;
    AMateria::operator=(other);
    return (*this);
/*--------------------------------------*/}

AMateria *Ice::clone() const {return (new Ice(*this));}
void    Ice::use(ICharacter &target)    {
/*-------------------------------------*/
    std::cout << std::endl;
    std::cout << MAGENTA << "* shoots an ice bolt at  " << target.getName() << " *" << RESET << std::endl;
    std::cout << std::endl;
/*------------------------------------*/}
