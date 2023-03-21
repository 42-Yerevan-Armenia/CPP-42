/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:06:26 by arakhurs          #+#    #+#             */
/*   Updated: 2023/03/21 15:21:31 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()  {
/*--------------------*/
    _current = 0;
    _index = 0;
/*--------------------*/}

PhoneBook::~PhoneBook() {};

void    empty(std::string &str, std::string display, bool flag) {
/*------------------------------------------------------------*/
    if (flag)
        str.erase();
    std::cout << CYAN << display << WHITE;
    do
    {
        getline(std::cin, str);
        if (str.empty())
            std::cout << RED "Empty line, fill it 👉 " WHITE;
    }
    while (str.empty());
/*------------------------------------------------------------*/}

void    PhoneBook::add(){
/*--------------------*/
    Contact     tmp;
    std::string str;

    empty(str, "First Name: ", false);
    tmp.setFirstName(str);
    this->_contact[_current % 8] = tmp;
    this->_current++;
    if (this->_current <= 8)
        this->_index = this->_current;
    std::cout << YELLOW << "ADDED" << std::endl;
/*--------------------*/}

std::string resize(std::string content)
{
    if (content.length() > 10)
    {
        content.erase(content.begin() + 9, content.end());
        content.append(".");   
    }
    return (content);
}

void    PhoneBook::display()    {
/*----------------------------*/
    std::cout << MAGENTA "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
    for (int i = 0; i < (int)this->_index; i++)
    {
        std::cout
        << "|" << std::setw(10) << i
        << "|" << std::setw(10) << resize(_contact[i].getFirstName())
        << "|" << std::setw(10)
        << "|" << std::setw(10)
        << "|" << std::endl;
    }
    
/*----------------------------*/}

void    PhoneBook::search() {
/*------------------------*/
    unsigned int    index;
    display();
    std::cout << GREEN "Enter the index " << WHITE;
    std::cin >> index;
    if (std::cin.fail())
        std::cout << RED << "TRY AGAIN " << WHITE << std::endl;
    else
    {
        if (index < this->_index)
        {
            std::cout << "First Name: " << this->_contact[index].getFirstName() << std::endl;
        }
        else
            std::cout << RED << "TRY AGAIN " << WHITE << std::endl;
    }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
/*------------------------*/}
