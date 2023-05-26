/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:00:46 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/26 17:16:30 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap    Kenpachi("Kenpachi Zaraki");
    ClapTrap    Unohana("Retsu Unohana");
    ScavTrap    Ulquiorra("Ulquiorra Cifer");
    FragTrap    Yamamoto("Genryūsai Shigekuni Yamamoto");
    
    Kenpachi.attack("Retsu Unohana");
    Unohana.takeDamage(Kenpachi.getAttackPoints());
    Unohana.beRepaired(1);
    Ulquiorra.guardGate();
    Ulquiorra.attack("Kenpachi");
    Kenpachi.takeDamage(Ulquiorra.getAttackPoints());
    Ulquiorra.attack("Unohana");
    Unohana.takeDamage(Ulquiorra.getAttackPoints());
    Yamamoto.highFivesGuys();
    return (0);
}
