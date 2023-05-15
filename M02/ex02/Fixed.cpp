/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:22:28 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/15 16:11:05 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fpv (0) {}
Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &fixed)  {*this = fixed;}

Fixed   &Fixed::operator=(const Fixed &fixed){
/*--------------------------------------------*/
    if (this != &fixed)
        this->fpv = fixed.getRawBits();
    return *this;
/*-------------------------------------------*/}

int     Fixed::getRawBits(void) const   {return this->fpv;}
void    Fixed::setRawBits(int const raw)    {this->fpv = raw;}
int     Fixed::toInt(void) const    {return (this->fpv >> this->fbn);}
float   Fixed::toFloat(void) const  {return (this->fpv / float(1 << fbn));}

Fixed::Fixed(const int value){this->setRawBits(value);}
Fixed::Fixed(const float value){this->fpv = roundf(value * (1 << fbn));}

std::ostream &operator<<(std::ostream &op, const Fixed &fixed){
/*-----------------------------------------------------------*/
    op << fixed.toFloat();
    return (op);
/*----------------------------------------------------------*/}
