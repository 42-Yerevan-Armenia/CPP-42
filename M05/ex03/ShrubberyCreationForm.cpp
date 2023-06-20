/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:29:43 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/20 15:02:23 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm ("Default constructor for SCForm", SCF_sign, SCF_exec){}
ShrubberyCreationForm::~ShrubberyCreationForm(){std::cout << RED << "Destructor for SCForm 💀" << RESET << std::endl;}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm() {
/*----------------------------------------------------------------------------------------*/
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
    if (this != &other)
        *this = other;
/*----------------------------------------------------------------------------------------*/}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)  {
/*--------------------------------------------------------------------------------------------*/
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
/*-------------------------------------------------------------------------------------------*/}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target)    {
/*-----------------------------------------------------------------------*/
    std::cout << GREEN << "Constructor for SCForm " << CYAN << target << std::endl; 
    setTName(target);
    setsgGrade(SCF_sign);
    setefgGrade(SCF_exec);
    AForm::setFName(target);
/*----------------------------------------------------------------------*/}

std::string const ShrubberyCreationForm::getTName()   const {return (_target);}
void              ShrubberyCreationForm::setTName(std::string const name)    {std::string *tmp = (std::string *)&_target; *tmp = name;}
char        const *ShrubberyCreationForm::SCFException::what() const throw(){return ("Couldn't open the file❗️");}


void        ShrubberyCreationForm::execute(Bureaucrat const &executor) const    {
/*-----------------------------------------------------------------------------*/
    std::ofstream   outfile;
    std::string file = getTName();

    if (executor.getGrade() > getefgGrade())
        throw AForm::GradeTooHighException();
    file.append("_shrubbery");
    outfile.open(file.c_str());
    if (!outfile.is_open())
        throw ShrubberyCreationForm::SCFException();
    outfile << TREE << std::endl;
    outfile.close();
/*----------------------------------------------------------------------------*/}
