/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:24:40 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/26 17:16:23 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()    {
/*---------------------*/
    std::cout << GREEN << "Default constructor called for FragTrap" << RESET << std::endl;
    _hitpoints =    100;
    _energypoints = 100;
    _attackpoints = 30;
/*--------------------*/}

FragTrap::~FragTrap(){std::cout << RED << "Destructor called for FragTrap 💀" << RESET << std::endl;}

FragTrap::FragTrap(const FragTrap &other)  {
/*----------------------------------------*/
    std::cout << YELLOW << "Copy constructor called for FragTrap" << RESET << std::endl;
    _name =         other._name;
    _hitpoints =    other._hitpoints;
    _energypoints = other._energypoints;
    _attackpoints = other._attackpoints;
/*---------------------------------------*/}

FragTrap   &FragTrap::operator=(const FragTrap &other)  {
/*-----------------------------------------------------*/
    std::cout << MAGENTA << "Copy assignment operator called for FragTrap" << RESET << std::endl;
    _name =         other._name;
    _hitpoints =    other._hitpoints;
    _energypoints = other._energypoints;
    _attackpoints = other._attackpoints;
    return (*this);
/*----------------------------------------------------*/}

FragTrap::FragTrap(std::string str) {
/*---------------------------------*/ 
    std::cout << GREEN << "Constructor for " << str << std::endl;
    _name = str;
    _hitpoints =    100;
    _energypoints = 100;
    _attackpoints = 30;
/*--------------------------------*/}

int FragTrap::getAttackPoints() const
    {return _attackpoints;}

void    FragTrap::setAttackPoints(int a)
    {this->_attackpoints = a;}

void    FragTrap::attack(const std::string &target){
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

void    FragTrap::highFivesGuys()   {std::cout << CYAN << _name << YELLOW << " calls High Five 🖐  members 🔥" << RESET << std::endl;}
