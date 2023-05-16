/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:22:28 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/16 16:58:47 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fpv(0) {}
Fixed::~Fixed()         {}

Fixed::Fixed(const Fixed &fixed)  {*this = fixed;}

Fixed   &Fixed::operator=(const Fixed &fixed){
/*--------------------------------------------*/
    if (this != &fixed)
        this->fpv = fixed.getRawBits();
    return (*this);
/*-------------------------------------------*/}

Fixed::Fixed(const int value)               {this->setRawBits(value << fbn);}
Fixed::Fixed(const float value)             {this->fpv = roundf(value * (1 << fbn));}

int     Fixed::getRawBits(void) const       {return this->fpv;}
void    Fixed::setRawBits(int const raw)    {this->fpv = raw;}
int     Fixed::toInt(void) const            {return (this->fpv >> this->fbn);}
float   Fixed::toFloat(void) const          {return (this->fpv / float(1 << fbn));}

bool    Fixed::operator>(const Fixed &fixed) const  {return (this->getRawBits() > fixed.getRawBits());}
bool    Fixed::operator<(const Fixed &fixed) const  {return (this->getRawBits() < fixed.getRawBits());}
bool    Fixed::operator>=(const Fixed &fixed) const {return (this->getRawBits() >= fixed.getRawBits());}
bool    Fixed::operator<=(const Fixed &fixed) const {return (this->getRawBits() <= fixed.getRawBits());}
bool    Fixed::operator==(const Fixed &fixed) const {return (this->getRawBits() == fixed.getRawBits());}
bool    Fixed::operator!=(const Fixed &fixed) const {return (this->getRawBits() != fixed.getRawBits());}

Fixed   Fixed::operator+(const Fixed &fixed) const  {return (Fixed(this->toFloat() + fixed.toFloat()));}
Fixed   Fixed::operator-(const Fixed &fixed) const  {return (Fixed(this->toFloat() - fixed.toFloat()));}
Fixed   Fixed::operator*(const Fixed &fixed) const  {return (Fixed(this->toFloat() * fixed.toFloat()));}
Fixed   Fixed::operator/(const Fixed &fixed) const  {return (Fixed(this->toFloat() / fixed.toFloat()));}

Fixed   Fixed::operator++(int) {
/*----------------------------*/
    Fixed   tmp(*this);

    ++this->fpv;
    return (tmp);
/*---------------------------*/}

Fixed   Fixed::operator--(int) {
/*----------------------------*/
    Fixed   tmp(*this);

    --this->fpv;
    return (tmp);
/*---------------------------*/}

Fixed   &Fixed::operator++() {
/*--------------------------*/
    ++this->fpv;
    return (*this);
/*-------------------------*/}

Fixed   &Fixed::operator--() {
/*--------------------------*/
    ++this->fpv;
    return (*this);
/*-------------------------*/}

Fixed   &Fixed::min(Fixed &a, Fixed &b) {
/*-------------------------------------*/
    if (a < b)
        return (a);
    return (b);
/*------------------------------------*/}

Fixed   &Fixed::max(Fixed &a, Fixed &b) {
/*-------------------------------------*/
    if (a > b)
        return (a);
    return (b);
/*------------------------------------*/}

const   Fixed &Fixed::min(Fixed const &a, Fixed const &b) {
/*-------------------------------------------------------*/
    if (a < b)
        return (a);
    return (b);
/*------------------------------------------------------*/}

const   Fixed &Fixed::max(Fixed const &a, Fixed const &b) {
/*-------------------------------------------------------*/
    if (a > b)
        return (a);
    return (b);
/*------------------------------------------------------*/}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
/*-----------------------------------------------------------*/
    out << fixed.toFloat();
    return (out);
/*----------------------------------------------------------*/}
