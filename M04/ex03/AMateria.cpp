/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:58:11 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/07 14:06:08 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){std::cout << GREEN << "Default constructor for 🅰️ Materia" << RESET << std::endl;}
AMateria::~AMateria(){std::cout << RED << "Destructor for 🅰️ Materia 💀 " << GREEN << _type << RESET << std::endl;}

AMateria::AMateria(const AMateria &other)   {
/*-----------------------------------------*/
    std::cout << YELLOW << "Copy constructor for 🅰️ Materia" << RESET << std::endl;
    *this = other;
/*----------------------------------------*/}

AMateria    &AMateria::operator=(const AMateria &other)  {
/*------------------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator for 🅰️ Materia" << RESET << std::endl;
    _type = other._type;
    return (*this);
/*-----------------------------------------------------*/}

AMateria::AMateria(std::string const &type){
/*----------------------------------------*/
    _type = type;
    std::cout << GREEN << "Type constructor for 🅰️ Materia " << CYAN << "[" << _type << "]" << RESET << std::endl;
/*---------------------------------------*/}

std::string const &AMateria::getType() const{return _type;}
void AMateria::use(ICharacter &target){(void)target;}
