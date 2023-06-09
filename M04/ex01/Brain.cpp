/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:21:19 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/07 18:37:37 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()  {
/*-------------*/
    _ideas = new std::string[100];
    std::cout << GREEN << "Default constructor for Brain" << RESET << std::endl;
/*------------*/}

Brain::~Brain() {
/*-------------*/
    delete[] _ideas;
    std::cout << RED << "Destructor for Brain 💀" << RESET << std::endl;
/*------------*/}

Brain::Brain(const Brain &other)  {
/*-------------------------*/
    std::cout << YELLOW << "Copy constructor for Brain" << RESET << std::endl;
    _ideas = new std::string[100];
    for (unsigned int i = 0; i < 100; ++i)
        _ideas[i] = other._ideas[i];
/*------------------------*/}

Brain   &Brain::operator=(const Brain &other)  {
/*--------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator for Brain" << RESET << std::endl;
    if (this != &other)
    {
        delete[] _ideas;
        _ideas = new std::string[100];
        for (unsigned int i = 0; i < 100; i++)
            _ideas[i] = other._ideas[i];
    }
    return (*this);
/*-------------------------------------------*/}

std::string &Brain::operator[](unsigned int i){return (_ideas[i]);}
