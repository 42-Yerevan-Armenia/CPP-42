/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:06:14 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/02 19:48:26 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    Point	a, b(4, 0), c(5, 0);
    Point   point(-3, 1);
    
    if (bsp(a, b, c, point))
        std::cout << GREEN "Point is in triangle" RESET <<std::endl;
    else
        std::cout << RED "Point is out of triangle " RESET << std::endl;
    return (0);
}