/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:51:37 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/09 16:24:22 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {

    public:
		virtual				~IMateriaSource(void) {}
		virtual void		learnMateria(AMateria *) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
                    };
#endif
