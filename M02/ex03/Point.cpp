/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:08:37 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/02 21:03:13 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0)) {}
Point::~Point() {}
Point::Point(const Point &copy) : _x(copy._x), _y(copy._y) {}
Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)){}
float	Point::getx() const {return _x.toFloat();}
float	Point::gety() const {return _y.toFloat();}

Point   &Point::operator=(const Point &fixed)   {
/*---------------------------------------------*/
    if (this == &fixed)
        return *this;
    (Fixed)this->_x = fixed.getx();
    (Fixed)this->_y = fixed.gety();
    return (*this);
/*--------------------------------------------*/}
