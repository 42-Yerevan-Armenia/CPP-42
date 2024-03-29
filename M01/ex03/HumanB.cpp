/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:56:16 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/07 21:25:23 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_nameB = name;
    this->_weaponB = NULL;
}

HumanB::~HumanB(){}

void    HumanB::attack(void) const
{
    std::cout << this->_nameB << " attacks with their ";
    std::cout << this->_weaponB->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon){this->_weaponB = &weapon;}
