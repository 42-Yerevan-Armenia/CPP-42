/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:24:40 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/26 17:18:48 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()    {
/*---------------------*/
    std::cout << GREEN << "Default constructor called for ScavTrap" << RESET << std::endl;
    _hitpoints =    100;
    _energypoints = 50;
    _attackpoints = 20;
/*--------------------*/}

ScavTrap::~ScavTrap(){std::cout << RED << "Destructor called for ScavTrap 💀" << RESET << std::endl;}

ScavTrap::ScavTrap(const ScavTrap &other)  {
/*----------------------------------------*/
    std::cout << YELLOW << "Copy constructor called for ScavTrap" << RESET << std::endl;
    _name =         other._name;
    _hitpoints =    other._hitpoints;
    _energypoints = other._energypoints;
    _attackpoints = other._attackpoints;
/*---------------------------------------*/}

ScavTrap   &ScavTrap::operator=(const ScavTrap &other)  {
/*-----------------------------------------------------*/
    std::cout << MAGENTA << "Copy assignment operator called for ScavTrap" << RESET << std::endl;
    _name =         other._name;
    _hitpoints =    other._hitpoints;
    _energypoints = other._energypoints;
    _attackpoints = other._attackpoints;
    return (*this);
/*----------------------------------------------------*/}

ScavTrap::ScavTrap(std::string str) {
/*---------------------------------*/ 
    std::cout << GREEN << "Constructor for " << str << std::endl;
    _name = str;
    _hitpoints =    100;
    _energypoints = 50;
    _attackpoints = 20;
/*--------------------------------*/}

int ScavTrap::getAttackPoints() const
    {return _attackpoints;}

void    ScavTrap::setAttackPoints(int a)
    {this->_attackpoints = a;}

void    ScavTrap::attack(const std::string &target){
/*------------------------------------------------*/
    if (_energypoints == 0 || _hitpoints == 0)
        return ;
    _energypoints--;
    std::cout << CYAN << _name << " attacks 🗡 " << target;
    if (_attackpoints > 0)
        std::cout << ", causing " << MAGENTA << _attackpoints << CYAN << " damage 💥 you has "<< MAGENTA << _energypoints << CYAN << " energy 💪" << std::endl;
    else
        std::cout << ", but causes no damage 👻" << std::endl;
/*-----------------------------------------------*/}

void    ScavTrap::guardGate()   {std::cout << CYAN << _name << YELLOW << " has entered Gate keeper mode." << RESET << std::endl;}
