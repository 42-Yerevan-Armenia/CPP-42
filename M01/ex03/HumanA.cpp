/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:56:14 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/07 21:25:38 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _nameA(name), _weaponA(weapon){}

HumanA::~HumanA(){}

void    HumanA::attack(void) const
{
	std::cout << _nameA << " attacks with their ";
	std::cout << _weaponA.getType() << std::endl;
}
