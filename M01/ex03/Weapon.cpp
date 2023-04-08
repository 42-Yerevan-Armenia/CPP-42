/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:55:51 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/08 10:55:13 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string str){this->setType(str);}

Weapon::~Weapon(){}

const std::string &Weapon::getType(void) const{return (this->_type);}

void    Weapon::setType(const std::string newType){this->_type = newType;}
