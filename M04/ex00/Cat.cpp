/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:32:36 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/27 18:02:12 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat 🐱"){std::cout << GREEN << "Default constructor for Cat" << RESET << std::endl;}
Cat::~Cat(){std::cout << MAGENTA << "Destructor for Cat 💀" << RESET << std::endl;}

Cat::Cat(Cat &other)  {
/*-------------------*/
    std::cout << YELLOW << "Copy constructor fot Cat" << RESET << std::endl;
    *this = other;
/*-------------------*/}

void    Cat::makeSound() const{std::cout << MAGENTA << "Meow" << RESET << std::endl;}
