/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:44:46 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/13 16:57:57 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fpv (0) {std::cout << GREEN << "Default constructor called" << RESET << std::endl;}

Fixed::~Fixed() {std::cout << RED << "Destructor called 💀" << RESET << std::endl;}

Fixed::Fixed(const Fixed &fixed)  {
/*-------------------------------*/
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
    *this = fixed;
/*------------------------------*/}

Fixed   &Fixed::operator=(const Fixed &fixed)  {
/*--------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    this->fpv = fixed.getRawBits();
    return *this;
/*-------------------------------------------*/}

int Fixed::getRawBits(void) const   {
/*---------------------------------*/
        std::cout << "getRawBits member function called" << std::endl;
        return this->fpv;
/*--------------------------------*/}

void    Fixed::setRawBits(int const raw)    {this->fpv = raw;}
