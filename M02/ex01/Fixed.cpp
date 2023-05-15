/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:43:00 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/15 17:41:11 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fpv(0) {std::cout << GREEN << "Default constructor called" << RESET << std::endl;}

Fixed::~Fixed() {std::cout << RED << "Destructor called 💀" << RESET << std::endl;}

 Fixed::Fixed(const Fixed &fixed)  {
/*-------------------------------*/
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl; 
    *this = fixed;
/*------------------------------*/}

const Fixed &Fixed::operator=(const Fixed &fixed){
/*--------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    if (this != &fixed)
        this->fpv = fixed.getRawBits();
    return (*this);
/*-------------------------------------------*/}

Fixed::Fixed(const int value){
/*--------------------------*/
    std::cout << GREEN << "Int constructor called" << RESET << std::endl;
    this->fpv = value << this->fbn;
/*-------------------------*/}

Fixed::Fixed(const float value){
/*----------------------------*/
    std::cout << GREEN << "Float constructor called" << RESET << std::endl;
    this->fpv = roundf(value * (1 << fbn));
/*---------------------------*/}

int     Fixed::getRawBits(void) const       {return this->fpv;}
void    Fixed::setRawBits(int const raw)    {this->fpv = raw;}
int     Fixed::toInt(void) const            {return (this->fpv >> fbn);}
float   Fixed::toFloat(void) const          {return (this->fpv / float(1 << fbn));}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
/*-----------------------------------------------------------*/
    out << fixed.toFloat();
    return (out);
/*----------------------------------------------------------*/}


