/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:30:55 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/27 16:12:16 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){std::cout << GREEN << "Default constructor for WrongAnimal" << RESET << std::endl;}
WrongAnimal::~WrongAnimal(){std::cout << RED << "Destructor for WrongAnimal 💀" << RESET << std::endl;}

WrongAnimal::WrongAnimal(WrongAnimal &other)  {
/*----------------------------------------*/
    std::cout << YELLOW << "Copy constructor for WrongAnimal" << RESET << std::endl;
    *this = other;
/*---------------------------------------*/}


WrongAnimal   &WrongAnimal::operator=(const WrongAnimal &other)  {
/*-----------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator for WrongAnimal" << RESET << std::endl;
    _type = other._type;
    return (*this);
/*----------------------------------------------*/}

WrongAnimal::WrongAnimal(const std::string &type) {
/*-------------------------------------*/
    _type = type;
    std::cout << GREEN << "Type constructor for WrongAnimal " << CYAN << _type << RESET << std::endl;
/*------------------------------------*/}

std::string WrongAnimal::getType() const{return _type;}

void WrongAnimal::makeSound() const{std::cout << YELLOW << "WrongAnimal sound 🔊" << RESET << std::endl;}
