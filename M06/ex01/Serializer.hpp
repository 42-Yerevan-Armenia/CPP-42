/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:31:07 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/09 16:33:31 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

class Data {
public:
    int value;
};

class Serializer  {

    public:

    static uintptr_t    serialize(Data *ptr)        {return reinterpret_cast<uintptr_t>(ptr);}
    static Data         *deserialize(uintptr_t raw) {return reinterpret_cast<Data*>(raw);}

    private:
        Serializer();
        Serializer(const Serializer &copy);
        Serializer &operator=(const Serializer &other);
        ~Serializer();
            };
#endif
