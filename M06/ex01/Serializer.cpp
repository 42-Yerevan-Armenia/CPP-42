/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:31:39 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/09 16:34:40 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}
Serializer::~Serializer(){}

Serializer::Serializer(const Serializer &copy)   {
/*----------------------------------------------*/
        if (this != &copy)
        *this = copy;
/*----------------------------------------------*/}

Serializer &Serializer::operator=(const Serializer &other)   {
/*----------------------------------------------------------*/
    if (this == &other)
        return (*this);
    return (*this);
/*----------------------------------------------------------*/}
