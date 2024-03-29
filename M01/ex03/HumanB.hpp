/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:56:09 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/07 21:01:13 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class   HumanB  {
    
    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack(void) const;
        void    setWeapon(Weapon &weapon);

    private:
        std::string _nameB;
        Weapon  *_weaponB;
                };

#endif
