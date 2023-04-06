/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:49:55 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/06 15:27:10 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &name)
{
    _name = name;
    std::cout << GREEN << name << ": 🧟 is entering into your house 🏚" << RESET << std::endl;
};

Zombie::~Zombie()
{
    std::cout << YELLOW << this->_name << ": was killed 💀" << RESET << std::endl;
};

void	Zombie::announce(void) const
{
    std::cout << RED << this->_name << ": BraiiiiiiinnnzzzZ...🧠" << RESET << std::endl;
}
