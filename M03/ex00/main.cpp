/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:24:33 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/26 17:15:20 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    Kenpachi("Kenpachi Zaraki");
    ClapTrap    Unohana("Retsu Unohana");
    
    Kenpachi.attack("Retsu Unohana");
    Unohana.takeDamage(Kenpachi.getAttackPoints());
    Unohana.beRepaired(1);
    return (0);
}
