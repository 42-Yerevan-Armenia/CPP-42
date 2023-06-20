/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:27:00 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/20 15:01:47 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm ("Default constructor for PPForm", PPF_sign, PPF_exec){}
PresidentialPardonForm::~PresidentialPardonForm(){std::cout << RED << "Destructor for PPForm 💀" << RESET << std::endl;}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm() {
/*-------------------------------------------------------------------------------------------*/
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
    if (this != &other)
        *this = other;
/*------------------------------------------------------------------------------------------*/}

PresidentialPardonForm   &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)  {
/*-----------------------------------------------------------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator called for " << other.getTName() << RESET << std::endl;
     if (this == &other)
        return (*this);
    if (other.getsgGrade() > MIN || other.getefgGrade() > MIN)
        throw AForm::GradeTooLowException();
    if (other.getsgGrade() < MAX || other.getefgGrade() < MAX)
        throw AForm::GradeTooHighException();
    setTName(other.getTName());
    setsgGrade(other.getsgGrade());
    setefgGrade(other.getefgGrade());
    return (*this);
/*----------------------------------------------------------------------------------------------*/}

PresidentialPardonForm::PresidentialPardonForm(std::string const target)    {
/*-------------------------------------------------------------------------*/
    std::cout << GREEN << "Constructor for PPForm " << CYAN << target << std::endl; 
    setTName(target);
    setsgGrade(PPF_sign);
    setefgGrade(PPF_exec);
    AForm::setFName(target);
/*------------------------------------------------------------------------*/}

std::string const PresidentialPardonForm::getTName()   const {return (_target);}
void              PresidentialPardonForm::setTName(std::string const name)    {std::string *tmp = (std::string *)&_target; *tmp = name;}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const   {
/*-------------------------------------------------------------------------*/
    if (executor.getGrade() > getefgGrade())
        throw AForm::GradeTooHighException();
    std::cout << RED << getTName() << MAGENTA << " has been pardoned by Zaphod Beeblebrox." << std::endl;
/*------------------------------------------------------------------------*/}
