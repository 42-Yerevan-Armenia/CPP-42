/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:05:58 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/04 17:53:16 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()	{
/*-----------------------------*/
	_size = 0;
	std::cout << GREEN << "Default constructor for MateriaSource" << RESET << std::endl;
/*----------------------------*/}

MateriaSource::~MateriaSource()	{
/*-----------------------------*/
	std::cout << RED << "Destructor for MateriaSource 💀" << RESET << std::endl;
	for (int i = 0; i < _size; ++i)
		delete _materias[i];
/*----------------------------*/}

MateriaSource::MateriaSource(const MateriaSource &other)   {
/*--------------------------------------------------------*/
    std::cout << YELLOW << "Copy constructor for MateriaSource" << RESET << std::endl;
    *this = other;
	for (int i = 0; i < _size; ++i)
		_materias[i] = other._materias[i]->clone();
/*-------------------------------------------------------*/}

MateriaSource    &MateriaSource::operator=(const MateriaSource &other)  {
/*---------------------------------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator for MateriaSource" << RESET << std::endl;
    for (int i = 0; i < _size; ++i)
		delete _materias[i];
	_size = other._size;
	for (int i = 0; i < _size; ++i)
		_materias[i] = other._materias[i]->clone();
    return (*this);
/*--------------------------------------------------------------------*/}

void		MateriaSource::learnMateria(AMateria *materia) {
/*--------------------------------------------------------*/
	if (_size < 4)
		_materias[(_size)++] = materia;
	else
		std::cout << "Only 4 materia ❗️" << std::endl;
/*-------------------------------------------------------*/}

AMateria	*MateriaSource::createMateria(std::string const &type)  {
/*-----------------------------------------------------------------*/
	for (int i = 0; i < _size; ++i)
		if (type == _materias[i]->getType())
			return (_materias[i]->clone());
	return (NULL);
/*----------------------------------------------------------------*/}
