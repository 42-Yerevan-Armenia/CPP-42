/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:33:14 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/20 18:14:31 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){std::cout << GREEN << "Default constructor for Intern" << RESET << std::endl;}
Intern::~Intern(){std::cout << RED << "Destructor for Intern 💀" << CYAN << RESET << std::endl;}

Intern::Intern(const Intern &other){
/*--------------------------------*/
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
    if (this != &other)
        *this = other;
/*--------------------------------*/}

Intern   &Intern::operator=(const Intern &other)  {
/*-----------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator called for " << RESET << std::endl;
     if (this == &other)
        return (*this);
    return (*this);
/*-----------------------------------------------*/}

AForm   *Intern::makeForm(std::string name, std::string target) const {
/*-------------------------------------------------------------------*/
    (void)name;
    (void)target;
    return (0);
/*------------------------------------------------------------------*/}
