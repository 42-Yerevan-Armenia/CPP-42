/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:32:36 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/27 16:17:52 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat 🐮"){std::cout << GREEN << "Default constructor for WrongCat" << RESET << std::endl;}
WrongCat::~WrongCat(){std::cout << RED << "Destructor for WrongCat 💀" << RESET << std::endl;}

WrongCat::WrongCat(WrongCat &other)  {
/*-------------------*/
    std::cout << YELLOW << "Copy constructor fot WrongCat" << RESET << std::endl;
    *this = other;
/*-------------------*/}

void    WrongCat::makeSound() const{std::cout << MAGENTA << "Mooo" << RESET << std::endl;}
