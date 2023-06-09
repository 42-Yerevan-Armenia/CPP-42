/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:31:22 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/07 18:24:39 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal   {

    public:
        WrongCat();
        WrongCat(WrongCat &other);
        ~WrongCat();
        using WrongAnimal::operator=;
        void makeSound() const;
                            };
#endif