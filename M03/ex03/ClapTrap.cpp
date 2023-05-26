/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:24:40 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/26 17:19:39 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()    {
/*---------------------*/
    std::cout << GREEN << "Default constructor called for ClapTrap" << RESET << std::endl;
    _hitpoints =    10;
    _energypoints = 10;
    _attackpoints = 0;
/*--------------------*/}

ClapTrap::~ClapTrap(){std::cout << RED << "Destructor called for ClapTrap 💀" << RESET << std::endl;}

ClapTrap::ClapTrap(const ClapTrap &other)  {
/*-------------------------------*/
    std::cout << YELLOW << "Copy constructor called for ClapTrap" << RESET << std::endl;
    _name =         other._name;
    _hitpoints =    other._hitpoints;
    _energypoints = other._energypoints;
    _attackpoints = other._attackpoints;
/*------------------------------*/}

ClapTrap   &ClapTrap::operator=(const ClapTrap &other)  {
/*--------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator called for ClapTrap" << RESET << std::endl;
    _name =         other._name;
    _hitpoints =    other._hitpoints;
    _energypoints = other._energypoints;
    _attackpoints = other._attackpoints;
    return (*this);
/*-------------------------------------------*/}

ClapTrap::ClapTrap(std::string str): _name(str), _hitpoints(10), _energypoints(10), _attackpoints(1)
{   std::cout << GREEN << "Constructor for " << str << std::endl;}

int ClapTrap::getAttackPoints() const
    {return _attackpoints;}

void    ClapTrap::setAttackPoints(int a)
    {this->_attackpoints = a;}

void    ClapTrap::attack(const std::string &target){
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

void    ClapTrap::takeDamage(unsigned int amount){
/*----------------------------------------------*/
    _hitpoints -= amount;
     std::cout << MAGENTA << _name << " takes " << CYAN << amount;
    if (_hitpoints < 0)
    {
        _hitpoints = 0;
        std::cout << MAGENTA << " damage 💥 and dead 💀 " << CYAN << _hitpoints << MAGENTA << " HP ⛑" << std::endl;
    }
    else
        std::cout << MAGENTA << " damage 💥 and has " << CYAN << _hitpoints << MAGENTA << " HP ⛑" << std::endl;
/*---------------------------------------------*/}

void    ClapTrap::beRepaired(unsigned int amount){
/*----------------------------------------------*/
    if (_energypoints == 0 || _hitpoints == 0)
        return ;
    _energypoints--;
    _hitpoints += amount;
    std::cout << MAGENTA << _name << " is healed " << CYAN << amount << MAGENTA << " pionts 💉 and has " << CYAN << _energypoints << MAGENTA << " energy 💪, " << CYAN << _hitpoints << MAGENTA << " HP ⛑" << std::endl;
/*---------------------------------------------*/}
