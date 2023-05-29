/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:05:52 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/29 11:14:29 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{

    public:
        Cure();
        Cure(const Cure &other);
        Cure &operator=(const Cure &other);
        ~Cure();
        
        //
        //
            };
#endif
//❌