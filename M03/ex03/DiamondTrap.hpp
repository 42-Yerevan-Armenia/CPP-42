/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:19:18 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/26 17:19:21 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{

    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap& operator=(const DiamondTrap &other);
        virtual ~DiamondTrap();
        void        whoAmI();
        void        setAttackPoints(int a);
        int         getAttackPoints() const;
        
    private:
        std::string _name;
        int FragTrap::_hitpoints;
        int ScavTrap::_energypoints;
        int FragTrap::_attackpoints;
/*--------------------------*/}
                };
#endif
