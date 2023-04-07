/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:49:55 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/07 15:30:10 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string &name) : _name(name){}

Zombie::~Zombie()
{
    std::cout << YELLOW << this->_name << ": was killed 💀" << RESET << std::endl;
}

void	Zombie::announce()
{
    std::cout << RED << this->_name << ": BraiiiiiiinnnzzzZ...🧠" << RESET << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
    if (name.empty())
        this->_name = "🧟🧟🧟🧟🧟🧟🧟🧟🧟🧟🧟🧟🧟🧟🧟🧟🧟";
}
