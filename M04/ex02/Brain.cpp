/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:21:19 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/27 16:33:53 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){std::cout << GREEN << "Default constructor for Brain" << RESET << std::endl;}
Brain::~Brain(){std::cout << RED << "Destructor for Brain 💀" << RESET << std::endl;}

Brain::Brain(Brain &other)  {
/*-------------------------*/
    std::cout << YELLOW << "Copy constructor for Brain" << RESET << std::endl;
    *this = other;
/*------------------------*/}

Brain   &Brain::operator=(const Brain &other)  {
/*--------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator for Brain" << RESET << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
    return (*this);
/*-------------------------------------------*/}

std::string &Brain::operator[](unsigned int i){return (_ideas[i]);}
