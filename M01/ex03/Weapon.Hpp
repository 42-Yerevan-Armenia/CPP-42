/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:05:04 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/08 10:55:21 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon    {

    public:
        Weapon(const std::string str);
        ~Weapon();
        const   std::string &getType(void) const;
        void    setType(const std::string newType);

    private:
        std::string _type;
                };
#endif
