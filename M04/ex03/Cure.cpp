/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:05:49 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/04 18:16:48 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){std::cout << GREEN << "Default constructor for Cure" << RESET << std::endl;}
Cure::~Cure(){std::cout << RED << "Destructor for Cure 💀" << RESET << std::endl;}
Cure::Cure(const Cure &other)   {std::cout << YELLOW << "Copy constructor for Cure" << RESET << std::endl; *this = other;}

Cure    &Cure::operator=(const Cure &other)  {
/*------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator for Cure" << RESET << std::endl;
    AMateria::operator=(other);
    return (*this);
/*-----------------------------------------*/}

AMateria *Cure::clone() const {return (new Cure(*this));}

void    Cure::use(ICharacter &target)    {
/*-------------------------------------*/
    std::cout << std::endl;
    std::cout << MAGENTA << "* heals  " << target.getName() << "'s wounds *" << RESET << std::endl;
    std::cout << std::endl;
/*------------------------------------*/}