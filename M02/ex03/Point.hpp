/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:08:39 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/02 21:03:05 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &copy);
        Point   &operator=(const Point &fixed);
        ~Point();

        float   getx() const;
		float	gety() const;

    private:
        Fixed const _x;
        Fixed const _y;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif
