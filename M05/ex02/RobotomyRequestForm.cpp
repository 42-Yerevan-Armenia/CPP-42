/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:29:31 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/25 19:59:39 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm ("Default constructor for RRForm", RRF_sign, RRF_exec){}
RobotomyRequestForm::~RobotomyRequestForm(){std::cout << RED << "Destructor for RRForm 💀" << RESET << std::endl;}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm() {
/*----------------------------------------------------------------------------------*/
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
    if (this != &other)
        *this = other;
/*----------------------------------------------------------------------------------*/}

RobotomyRequestForm   &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)  {
/*--------------------------------------------------------------------------------------*/
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
/*-------------------------------------------------------------------------------------*/}

RobotomyRequestForm::RobotomyRequestForm(std::string const target)    {
/*-------------------------------------------------------------------*/
    std::cout << GREEN << "Constructor for RRForm " << CYAN << target << std::endl; 
    setTName(target);
    setsgGrade(RRF_sign);
    setefgGrade(RRF_exec);
    AForm::setFName(target);
/*------------------------------------------------------------------*/}

std::string const RobotomyRequestForm::getTName()   const {return (_target);}
void              RobotomyRequestForm::setTName(std::string const name)    {std::string *tmp = (std::string *)&_target; *tmp = name;}

void        RobotomyRequestForm::execute(Bureaucrat const &executor) const      {
/*-----------------------------------------------------------------------------*/
    if (executor.getGrade() > getefgGrade())
        throw AForm::GradeTooHighException();
    system("say Oh, no! Oh my GOD!");
    std::srand(std::time(NULL));
    if (std::rand() % 100 < 50)
        std::cout << getTName() << MAGENTA << " robotomized not successfully" << std::endl;
	else
        std::cout << getTName() << MAGENTA << " robotomized successfully" << std::endl;
/*----------------------------------------------------------------------------*/}
