/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:22:28 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/13 17:22:30 by arakhurs         ###   ########.fr       */
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

Fixed   &Fixed::operator=(const Fixed &fixed){
/*--------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    this->fpv = fixed.getRawBits();
    return *this;
/*-------------------------------------------*/}

int     Fixed::getRawBits(void) const   {return this->fpv;}
void    Fixed::setRawBits(int const raw)    {this->fpv = raw;}
int     Fixed::toInt(void) const    {return (this->fpv >> this->fbn);}
float   Fixed::toFloat(void) const  {return (this->fpv / float(1 << fbn));}

Fixed::Fixed(const int value){
/*--------------------------*/
    std::cout << GREEN << "Int constructor called" << RESET << std::endl;
    this->setRawBits(value); //this->fpv = value << this->fbn;
/*-------------------------*/}

Fixed::Fixed(const float value){
/*----------------------------*/
    std::cout << GREEN << "Float constructor called" << RESET << std::endl;
    this->fpv = roundf(value * (1 << fbn));
/*---------------------------*/}

std::ostream &operator<<(std::ostream &op, const Fixed &fixed){
/*-----------------------------------------------------------*/
    op << fixed.toFloat();
    return (op);
/*----------------------------------------------------------*/}
