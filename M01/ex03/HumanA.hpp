/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:56:12 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/07 20:59:09 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class   HumanA  {
    
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void    attack(void) const;

    private:
        std::string _nameA;
        Weapon  &_weaponA;
                };
#endif
