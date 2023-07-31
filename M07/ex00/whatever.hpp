/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:07:40 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/28 16:13:06 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <utility>

template <typename T> void swap ( T &a, T &b ) {T c(a); a=b; b=c;}
template <typename T> const T &max (const T &a, const T &b) {return !(b>a)?a:b;}
template <typename T> const T &min (const T &a, const T &b) {return !(b<a)?a:b;}

#endif
