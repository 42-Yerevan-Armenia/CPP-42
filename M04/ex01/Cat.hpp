/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:31:22 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/27 17:41:47 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal   {

    public:
        Cat();
        Cat(Cat &other);
        ~Cat();
        using Animal::operator=;
        virtual void makeSound() const;
    
    private:
        Brain   *_brain;
                            };
#endif