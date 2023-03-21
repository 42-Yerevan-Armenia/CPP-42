/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:06:18 by arakhurs          #+#    #+#             */
/*   Updated: 2023/03/21 11:39:21 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ◦ Stands for a phonebook contact.

#include "Contact.hpp"

std::string Contact::getFirstName(void) const
    {return _firstname;}

void    Contact::setFirstName(std::string s)
    {this->_firstname = s;}
