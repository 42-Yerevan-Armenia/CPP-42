/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:21:29 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/09 16:23:07 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#include <iostream>

class Brain {
    
    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        ~Brain();
    
        std::string &operator[](unsigned int i);

    protected:
        std::string *_ideas;
            };
#endif
