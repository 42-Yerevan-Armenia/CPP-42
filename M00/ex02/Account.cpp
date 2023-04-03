/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 20:33:07 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/03 17:20:32 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void){return _nbAccounts;}
int Account::getTotalAmount(void){return _totalAmount;}
int Account::getNbDeposits(void){return _totalNbDeposits;}
int Account::getNbWithdrawals(void){return _totalNbWithdrawals;}
int Account::checkAmount(void)  const{return this->_amount;}

Account::Account(int init)  {
/*-------------------------*/
    this->_accountIndex = _nbAccounts;
    _nbAccounts++;
	this->_amount = init;
    _totalAmount += init;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount 
    << ";created" << std::endl;
/*------------------------*/}

Account::~Account() {
/*-----------------*/
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount 
    << ";closed" << std::endl;
/*----------------*/}

void    Account::makeDeposit(int deposit)   {
/*-----------------------------------------*/
    int p_amount;

    p_amount = this->_amount;
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount 
    << ";deposit:" << deposit << ";amount:" << this->_amount 
    << ";nb_deposits:" << this->_nbDeposits << std::endl;
/*-----------------------------------------*/}

bool    Account::makeWithdrawal(int withdrawal) {
/*---------------------------------------------*/
    _displayTimestamp();
    if (this->_amount - withdrawal < 0)
    {
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount 
        << ";withdrawal:refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount 
    << ";withdrawal:" << withdrawal << ";amount:" << this->_amount 
    << ";nbWithdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
/*--------------------------------------------*/}

void	Account::displayAccountsInfos() {
/*-------------------------------------*/
    _displayTimestamp();
    std::cout <<  "accounts:" << _nbAccounts << ";total:" << _totalAmount 
    << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
/*------------------------------------*/}

void	Account::displayStatus() const  {
/*-------------------------------------*/
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount 
    << ";deposit:" << this->_nbDeposits << ";withdrawal:" << this->_nbWithdrawals << std::endl;
/*------------------------------------*/}

void    Account::_displayTimestamp(void)    {
/*-----------------------------------------*/
    time_t  now;
    tm      *lt;
 
    time(&now);
    lt = std::localtime(&now);
	std::cout << std::setfill('0') << "[" << (lt->tm_year + 1900);
    std::cout << std::setw(2) << lt->tm_mon;
    std::cout << std::setw(2) << lt->tm_mday << "_";
    std::cout << std::setw(2) << lt->tm_hour;
    std::cout << std::setw(2) << lt->tm_min;
    std::cout << std::setw(2) << lt->tm_sec << "] ";
/*----------------------------------------*/}
