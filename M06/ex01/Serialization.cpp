/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:31:39 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/09 15:42:47 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization(){}
Serialization::~Serialization(){}

Serialization::Serialization(const Serialization &copy)   {
/*-------------------------------------------------------------*/
        if (this != &copy)
        *this = copy;
/*------------------------------------------------------------*/}

Serialization &Serialization::operator=(const Serialization &other)   {
/*-------------------------------------------------------------------------*/
    if (this == &other)
        return (*this);
    return (*this);
/*-------------------------------------------------------------------------*/}
