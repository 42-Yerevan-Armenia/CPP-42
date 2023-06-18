/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:06:26 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/18 18:49:53 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()  {
/*--------------------*/
    _current = 0;
    _index = 0;
/*--------------------*/}

PhoneBook::~PhoneBook() {};

void    empty(std::string &str, std::string display) {
/*--------------------------------------------------*/
    std::cout << CYAN << display << WHITE;
    do
    {
        getline(std::cin, str);
        if (std::cin.eof())
            break ;
        if (str.empty())
            std::cout << RED "Empty line, fill it 👉 " WHITE;
    }
    while (str.empty());
/*-------------------------------------------------*/}

bool only_digits(const std::string &str)    {
/*---------------------------------------=-*/
    for (size_t i = 0; i < str.length(); ++i)
        if (!std::isdigit(str[i]))
            return false;
    return true;
/*----------------------------------------*/}

bool only_letters(const std::string& str)   {
/*----------------------------------------*/
    for (size_t i = 0; i < str.length(); ++i)
        if (!std::isalpha(str[i]))
            return false;
    return true;
/*----------------------------------------*/}

void get_input(std::string &str, const std::string &display, bool (*checker)(const std::string&))    {
/*--------------------------------------------------------------------------------------------------*/
    std::cout << CYAN << display << WHITE;
    do
    {
        getline(std::cin, str);
        if (std::cin.eof())
            break ;
        if (str.empty())
            std::cout << RED "Empty line, fill it 👉 " WHITE;
        else if (!checker(str))
            std::cout << RED "Invalid input, try again 👉 " WHITE;
    }
    while (str.empty() || !checker(str));
/*-------------------------------------------------------------------------------------------------*/}


void    PhoneBook::add(){
/*---------------------*/
    Contact     tmp;
    std::string str;

    get_input(str, "First Name: ", only_letters);
    tmp.setFirstName(str);
    get_input(str, "Last Name: ", only_letters);
    tmp.setLastName(str);
    empty(str, "Nick Name: ");
    tmp.setNickName(str);
    get_input(str, "Phone Number: ", only_digits);
    tmp.setPhoneNumber(str);
    empty(str, "Darkest Secret: ");
    tmp.setDarkestSecret(str);

    this->_contact[_current % 8] = tmp;
    this->_current++;
    if (this->_current <= 8)
        this->_index = this->_current;
    std::cout << YELLOW << "*------ADDED-------*" << std::endl;
/*--------------------*/}

std::string resize(std::string str)
{
    if (str.length() > 10)
    {
        str.erase(str.begin() + 9, str.end());
        str.append(".");   
    }
    return (str);
}

void    PhoneBook::display()    {
/*-----------------------------*/
    std::cout << MAGENTA "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
    for (int i = 0; i < (int)this->_index; i++)
    {
        std::cout
        << "|" << std::setw(10) << i
        << "|" << std::setw(10) << resize(_contact[i].getFirstName())
        << "|" << std::setw(10) << resize(_contact[i].getLastName())
        << "|" << std::setw(10) << resize(_contact[i].getNickName())
        << "|" << std::endl;
    }
/*----------------------------*/}

void    PhoneBook::search() {
/*-------------------------*/
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
            std::cout << "Last Name: " << this->_contact[index].getLastName() << std::endl;
            std::cout << "Nick Name: " << this->_contact[index].getNickName() << std::endl;
            std::cout << "Phone Number: " << this->_contact[index].getPhoneNumber() << std::endl;
            std::cout << "Darkest Secret: " << this->_contact[index].getDarkestSecret() << std::endl;
        }
        else
            std::cout << RED << "TRY AGAIN " << WHITE << std::endl;
    }
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
/*------------------------*/}
 