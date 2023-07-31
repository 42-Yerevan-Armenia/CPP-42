/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:14:30 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/31 20:45:32 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){};
BitcoinExchange::BitcoinExchange(std::string &filename): _in(filename){};
BitcoinExchange::~BitcoinExchange(){};

void    BitcoinExchange::exchange()   {
/*-----------------------------------*/
    std::ifstream   infile(this->_in);
    std::ofstream   outfile(this->_out);
    std::string     content;
    std::string     data;

    std::ifstream   datafile("data.csv");
    getline(datafile, data, '\0');

    if (!infile.is_open())
    {
        std::cout << "❌ No File" << std::endl;
        exit(1);
    }
    if (getline(infile, content, '\0'))
    {
        std::cout << content << std::endl;
        outfile << content;
        outfile.close();
    }
    else
    {
        std::cout << "❌ Empty File" << std::endl;
        exit(1);
    }
/*----------------------------------*/}
