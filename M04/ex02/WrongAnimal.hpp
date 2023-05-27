/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:29:25 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/27 16:12:35 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#include <iostream>
#include <string>

class WrongAnimal    {

    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(WrongAnimal &other);
        WrongAnimal(const std::string& type);
        WrongAnimal &operator=(const WrongAnimal &other);

        std::string getType() const;
        virtual void makeSound() const;

    protected:
        std::string _type;
                };
#endif