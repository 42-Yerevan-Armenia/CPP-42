/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:05:48 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/09 16:24:08 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter{

    public:
        Character();
        Character(const std::string &name);
        Character(const Character &other);
        Character &operator=(const Character &other);
        ~Character();

		std::string const	&getName() const;
		void				equip(AMateria *item);
		void				unequip(int i);
		void				use(int i, ICharacter &target);
        
    private:
        std::string _name;
        int         _size;
        AMateria    *_inventory[4];
                };
#endif
