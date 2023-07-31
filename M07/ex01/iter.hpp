/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:07:44 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/28 16:03:01 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T> void print(const T *a)
{std::cout << *a << std::endl;}

template <typename T> void iter (T *a, size_t l, void (*f)(const T*))
{
    for (size_t i = 0; i < l; i++)
        f(&a[i]);
}

#endif