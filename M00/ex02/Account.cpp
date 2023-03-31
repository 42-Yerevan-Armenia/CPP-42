/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 20:33:07 by arakhurs          #+#    #+#             */
/*   Updated: 2023/03/31 20:41:07 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account(int init)
{
    std::cout << "constructor" << init << std::endl;
}

Account::~Account()
{
    std::cout << "destructor" << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    std::cout << "deposit" << deposit << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    std::cout << "withdrawal" << withdrawal << std::endl;
    return (true);
}

void	Account::displayAccountsInfos()
{
    std::cout << "info" << std::endl;
}

void	Account::displayStatus() const
{
    std::cout << "status" << std::endl;
}
