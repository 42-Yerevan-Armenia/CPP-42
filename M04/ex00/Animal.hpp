/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:29:25 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/09 16:40:06 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#include <iostream>

class Animal    {

    public:
        Animal();
        virtual ~Animal();
        Animal(Animal &other);
        Animal(const std::string& type);
        Animal &operator=(const Animal &other);

        std::string getType() const;
        virtual void makeSound() const;

    protected:
        std::string _type;
                };
#endif