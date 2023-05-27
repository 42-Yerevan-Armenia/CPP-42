/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:32:16 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/27 17:42:09 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal   {

    public:
        Dog();
        Dog(Dog &other);
        ~Dog();
        using Animal::operator=;
        virtual void makeSound() const;
    
    private:
        Brain   *_brain;
                            };
#endif