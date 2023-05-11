/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Losers.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:46:51 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/11 16:14:06 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOSERS_HPP
# define LOSERS_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */

class Losers    {

    public:
        Losers(std::string &filename);
        ~Losers();
        void    replace(std::string &s1, std::string &s2);

    private:
        std::string _in;
        std::string _out;
                };
#endif
