/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Losers.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:46:49 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/11 17:19:47 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Losers.hpp"

Losers::Losers(std::string &filename): _in(filename)    {
/*-----------------------------------------------------*/
    this->_out = this->_in + ".replace";
/*----------------------------------------------------*/}

Losers::~Losers(void){}

void    Losers::replace(std::string &s1, std::string &s2)   {
/*---------------------------------------------------------*/
    std::ifstream   infile(this->_in);
    std::ofstream   outfile(this->_out);
    std::string     content;
    size_t          pos = 0;
    size_t          i = 0;
    
    if (!infile.is_open())
    {
        std::cout << "❌ No File" << std::endl;
        exit(1);
    }
    if (getline(infile, content, '\0'))
    {
        while (1)
        {
            pos = content.find(s1, i);
            if (pos == std::string::npos)
                break;
            content.erase(pos, s1.length());
            content.insert(pos, s2);
            i = pos + s2.length();
        }
        outfile << content;
        outfile.close();
    }
    else
    {
        std::cout << "❌ Empty File" << std::endl;
        exit(1);
    }
/*--------------------------------------------------------*/}
