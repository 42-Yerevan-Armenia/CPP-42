/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:06:18 by arakhurs          #+#    #+#             */
/*   Updated: 2023/03/24 12:00:38 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName(void) const
    {return _firstname;}
std::string Contact::getLastName(void) const
    {return _lastname;}
std::string Contact::getNickName(void) const
    {return _nickname;}
std::string Contact::getPhoneNumber(void) const
    {return _phonenumber;}
std::string Contact::getDarkestSecret(void) const
    {return _darkestsecret;}

void    Contact::setFirstName(std::string s)
    {this->_firstname = s;}
void    Contact::setLastName(std::string s)
    {this->_lastname = s;}
void    Contact::setNickName(std::string s)
    {this->_nickname = s;}
void    Contact::setPhoneNumber(std::string s)
    {this->_phonenumber = s;}
void    Contact::setDarkestSecret(std::string s)
    {this->_darkestsecret = s;}
