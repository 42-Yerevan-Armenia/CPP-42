/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:05:46 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/14 16:08:05 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){_size = 0; std::cout << GREEN << "Default constructor for Character " << CYAN << "[" << _name << "]" << RESET << std::endl;}
Character::~Character() {
/*---------------------*/
    std::cout << RED << "Destructor for Character 💀 " << GREEN << _name << RESET << std::endl;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    for (int i = 0; i < _size; i++)
        delete _inventory[i];
/*--------------------*/}

Character::Character(const Character &other)   {
/*--------------------------------------------*/
    std::cout << YELLOW << "Copy constructor for Character" << RESET << std::endl;
    _name = other._name;
    _size = other._size;
    for (int i = 0; i < _size; ++i)
        _inventory[i] = other._inventory[i]->clone();
/*-------------------------------------------*/}

Character    &Character::operator=(const Character &other)  {
/*---------------------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator for Character" << RESET << std::endl;
    for (int i = 0; i < _size; i++)
        delete _inventory[i];
    _name = other._name;
    _size = other._size;
    for (int i = 0; i < _size; ++i)
        _inventory[i] = other._inventory[i]->clone();
    return (*this);
/*--------------------------------------------------------*/}

Character::Character(std::string const &name){
/*------------------------------------------*/
    _size = 0;
    _name = name;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    std::cout << GREEN << "Type constructor for Character " << CYAN << "[" << _name << "]" << RESET << std::endl;
/*-----------------------------------------*/}

std::string const   &Character::getName() const {return _name;}

void    Character::equip(AMateria *item)   {
/*----------------------------------------*/
    if (_size < 4)
	{
        _inventory[(_size)++] = item;
        std::cout << "[" << item->getType() << "]" << MAGENTA << " equiped in inventory in index " << GREEN << "[" << _size - 1 << "]" << RESET << std::endl;
    }
	else
		std::cout << "Only 4 item ❗️" << std::endl;
/*---------------------------------------*/}

void	Character::unequip(int i)   {
/*---------------------------------*/ 
    if (!_inventory[i] && i < 4)
        std::cout << MAGENTA << "Can't unequip the empty inventory in index " << CYAN << "[" << i << "]" << std::endl;
    else if (i > 3)
        std::cout << RED << "❗️ERROR❗️ " << MAGENTA << "you can uneqip only 4 inventory, wrong index " << RED << "[" << i << "]" << std::endl;
    if (i >= 0 && i < _size)
    {
        if (i < _size)
        {
            std::cout << "[" << _name << "]" << MAGENTA << " unequiped from inventory index " << RED << "[" << i << "]" << RESET << std::endl;
            delete _inventory[i];
            while (_inventory[i + 1])
            {
                _inventory[i] = _inventory[i + 1];
                i++;
            }
            _inventory[i] = 0;
            _size -= 1;
        }
    }
/*--------------------------------*/}

void	Character::use(int i, ICharacter &target)   {
/*-------------------------------------------------*/
    if (!_inventory[i] && i < 4)
        std::cout << MAGENTA << "Empty inventory in index " << CYAN << "[" << i << "]" << std::endl;
    else if (i > 3)
        std::cout << RED << "❗️ERROR❗️ " << MAGENTA << "you can use only 4 inventory, wrong index " << RED << "[" << i << "]" << std::endl;
     if (i >= 0 && i < _size)
        _inventory[i]->use(target);
/*------------------------------------------------*/}
