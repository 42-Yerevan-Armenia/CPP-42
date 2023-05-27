/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:30:55 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/27 16:10:10 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){std::cout << GREEN << "Default constructor for Animal" << RESET << std::endl;}
Animal::~Animal(){std::cout << RED << "Destructor for Animal 💀" << RESET << std::endl;}

Animal::Animal(Animal &other)  {
/*----------------------------------------*/
    std::cout << YELLOW << "Copy constructor for Animal" << RESET << std::endl;
    *this = other;
/*---------------------------------------*/}


Animal   &Animal::operator=(const Animal &other)  {
/*-----------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator for Animal" << RESET << std::endl;
    _type = other._type;
    return (*this);
/*----------------------------------------------*/}

Animal::Animal(const std::string &type) {
/*-------------------------------------*/
    _type = type;
    std::cout << GREEN << "Type constructor for Animal " << CYAN << _type << RESET << std::endl;
/*------------------------------------*/}

std::string Animal::getType() const{return _type;}

void Animal::makeSound() const{std::cout << YELLOW << "Animal sound 🔊" << RESET << std::endl;}
