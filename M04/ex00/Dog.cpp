/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:32:47 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/27 18:02:17 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog 🐶"){std::cout << GREEN << "Default constructor for Dog" << RESET << std::endl;}
Dog::~Dog(){std::cout << MAGENTA << "Destructor for Dog 💀" << RESET << std::endl;}

Dog::Dog(Dog &other)  {
/*-------------------*/
    std::cout << YELLOW << "Copy constructor fot Cat" << RESET << std::endl;
    *this = other;
/*-------------------*/}

void    Dog::makeSound() const{std::cout << MAGENTA << "Bark" << RESET << std::endl;}
