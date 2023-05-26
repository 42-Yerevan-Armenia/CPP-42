/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:00:46 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/26 17:15:52 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap    Kenpachi("Kenpachi Zaraki");
    ClapTrap    Unohana("Retsu Unohana");
    ScavTrap    Ulquiorra("Ulquiorra Cifer");
    
    Kenpachi.attack("Retsu Unohana");
    Unohana.takeDamage(Kenpachi.getAttackPoints());
    Unohana.beRepaired(1);
    Ulquiorra.guardGate();
    Ulquiorra.attack("Kenpachi");
    Kenpachi.takeDamage(Ulquiorra.getAttackPoints());
    Ulquiorra.attack("Unohana");
    Unohana.takeDamage(Ulquiorra.getAttackPoints());
    return (0);
}
