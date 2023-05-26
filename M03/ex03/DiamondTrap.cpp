/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:19:27 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/26 17:19:30 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()    {
/*---------------------------*/
    std::cout << GREEN << "Default constructor called for DiamondTrap" << RESET << std::endl;
    _hitpoints =    FragTrap::_hitpoints;
    _energypoints = ScavTrap::_energypoints;
    _attackpoints = FragTrap::_attackpoints;
/*--------------------------*/}

DiamondTrap::~DiamondTrap(){std::cout << RED << "Destructor called for DiamondTrap 💀" << RESET << std::endl;}

DiamondTrap::DiamondTrap(const DiamondTrap &other)  {
/*-------------------------------*/
    std::cout << YELLOW << "Copy constructor called for DiamondTrap" << RESET << std::endl;
    _name =         other._name;
    _hitpoints =    other._hitpoints;
    _energypoints = other._energypoints;
    _attackpoints = other._attackpoints;
/*------------------------------*/}

DiamondTrap   &DiamondTrap::operator=(const DiamondTrap &other)  {
/*--------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator called for DiamondTrap" << RESET << std::endl;
    _name =         other._name;
    _hitpoints =    other._hitpoints;
    _energypoints = other._energypoints;
    _attackpoints = other._attackpoints;
    return (*this);
/*-------------------------------------------*/}

DiamondTrap::DiamondTrap(std::string str): _name(str), _hitpoints(10), _energypoints(10), _attackpoints(1)
{   std::cout << GREEN << "Constructor for " << str << std::endl;}

int DiamondTrap::getAttackPoints() const
    {return _attackpoints;}

void    DiamondTrap::setAttackPoints(int a)
    {this->_attackpoints = a;}

void    DiamondTrap::attack(const std::string &target){
/*------------------------------------------------*/
    if (_energypoints == 0 || _hitpoints == 0)
        return ;
    _energypoints--;
    std::cout << MAGENTA << _name << " attacks 🗡 " << target;
    if (_attackpoints > 0)
        std::cout << ", causing " << CYAN << _attackpoints << MAGENTA << " damage 💥 you has "<< CYAN << _energypoints << MAGENTA << " energy 💪" << std::endl;
    else
        std::cout << ", but causes no damage 👻" << std::endl;
/*-----------------------------------------------*/}
