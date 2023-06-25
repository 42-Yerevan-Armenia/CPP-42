/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:44:50 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/25 20:01:26 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){_grade = MIN; std::cout << GREEN << "Default constructor for Bureaucrat" << RESET << std::endl;}
Bureaucrat::~Bureaucrat(){std::cout << RED << "Destructor for Bureaucrat 💀" << CYAN << _name << RESET << std::endl;}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName()) {
/*----------------------------------------------------------------------*/
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
    if (other.getGrade() > MIN)
        throw GradeTooLowException();
    if (other.getGrade() < MAX)
        throw GradeTooHighException();
    if (this != &other)
        *this = other;
/*----------------------------------------------------------------------*/}

Bureaucrat   &Bureaucrat::operator=(const Bureaucrat &other)  {
/*-----------------------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator called for " << _name << RESET << std::endl;
    if (this == &other)
        return (*this);
    if (other.getGrade() > MIN)
        throw GradeTooLowException();
    if (other.getGrade() < MAX)
        throw GradeTooHighException();  
    _grade = other.getGrade();
    return (*this);
/*----------------------------------------------------------*/}

Bureaucrat::Bureaucrat(std::string const str, int grade): _name(str)  {
/*-------------------------------------------------------------------*/
    std::cout << GREEN << "Constructor for " << str << std::endl;
    if (grade > MIN)
        throw GradeTooLowException();
    if (grade < MAX)
        throw GradeTooHighException();
     _grade = grade;
/*------------------------------------------------------------------*/}

std::string const Bureaucrat::getName() const {return (_name);}
int Bureaucrat::getGrade() const {return (_grade);}
char        const *Bureaucrat::GradeTooHighException::what() const throw(){return ("Grade is too high!");}
char        const *Bureaucrat::GradeTooLowException::what()  const throw(){return ("Grade is too low!");}
 
void    Bureaucrat::increment() {
/*-----------------------------*/
    std::cout << YELLOW << "Increment" << RESET << std::endl;
    if (_grade == MAX)
        throw GradeTooLowException();
    _grade -= 1;
/*----------------------------*/}

void    Bureaucrat::decrement() {
/*-----------------------------*/
    std::cout << YELLOW << "Decrement" << RESET << std::endl;
    if (_grade == MIN)
        throw GradeTooHighException();
    _grade += 1;
/*----------------------------*/}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bur)  {
/*-----------------------------------------------------------------*/
    out << CYAN << bur.getName() << MAGENTA << "'s grade is " 
    << CYAN << bur.getGrade() << RESET << std::endl;
    return (out);
/*----------------------------------------------------------------*/}

void    Bureaucrat::signForm(AForm &f) const {
/*------------------------------------------*/
    try
    {
        f.beSigned(*this);
        std::cout << CYAN << getName() << " signed " << f.getFName() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << GREEN << _name << "'s " << e.what() << std::endl;
    }
/*-----------------------------------------*/}

void    Bureaucrat::execForm(AForm &f) const {
/*------------------------------------------*/
    try
    {
        f.execute(*this);
        std::cout << CYAN << getName() << " executed " << f.getFName() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << GREEN << _name << "'s " << e.what() << std::endl;
    }
/*-----------------------------------------*/}
