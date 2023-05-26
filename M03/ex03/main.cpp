/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:00:46 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/26 18:16:45 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ClapTrap    Kenpachi("Kenpachi Zaraki");
    ClapTrap    Unohana("Retsu Unohana");
    ScavTrap    Ulquiorra("Ulquiorra Cifer");
    FragTrap    Yamamoto("Genryūsai Yamamoto");
    DiamondTrap Aizen("Sōsuke Aizen");

    Kenpachi.attack("Unohana");
    Unohana.takeDamage(Kenpachi.getAttackPoints());
    Unohana.beRepaired(1);
    Ulquiorra.guardGate();
    Ulquiorra.attack("Kenpachi");
    Kenpachi.takeDamage(Ulquiorra.getAttackPoints());
    Ulquiorra.attack("Unohana");
    Unohana.takeDamage(Ulquiorra.getAttackPoints());
    Yamamoto.highFivesGuys();
    Aizen.attack("Yamamoto");
    Yamamoto.takeDamage(Aizen.getAttackPoints());
    Aizen.whoAmI();
    return (0);
}
