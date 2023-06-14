/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:21:08 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/14 16:29:03 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){_grade = MIN; std::cout << GREEN << "Default constructor for Bureaucrat" << RESET << std::endl;}
Bureaucrat::~Bureaucrat(){std::cout << RED << "Destructor for Bureaucrat 💀" << CYAN << _name << RESET << std::endl;}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName()) {
/*----------------------------------------------*/
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
    if (other.getGrade() > MIN)
        throw Bureaucrat::GradeTooLowException();
    if (other.getGrade() < MAX)
        throw Bureaucrat::GradeTooHighException();
    if (this != &other)
        *this = other;
/*---------------------------------------------*/}

Bureaucrat   &Bureaucrat::operator=(const Bureaucrat &other)  {
/*-----------------------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
     if (this == &other)
        return (*this);
    if (other.getGrade() > MIN)
        throw Bureaucrat::GradeTooLowException();
    if (other.getGrade() < MAX)
        throw Bureaucrat::GradeTooHighException();  
    _grade = other.getGrade();
    return (*this);
/*----------------------------------------------------------*/}

Bureaucrat::Bureaucrat(std::string const str, int grade): _name(str)  {
/*-------------------------------------------------------------*/
    std::cout << GREEN << "Constructor for " << str << std::endl;
    if (grade > MIN)
        throw Bureaucrat::GradeTooLowException();
    if (grade < MAX)
        throw Bureaucrat::GradeTooHighException();
     _grade = grade;
/*------------------------------------------------------------*/}

std::string const Bureaucrat::getName() const {return (_name);}
int Bureaucrat::getGrade() const {return (_grade);}
char        const *Bureaucrat::GradeTooHighException::what() const throw(){return ("Grade is too high!");}
char        const *Bureaucrat::GradeTooLowException::what()  const throw(){return ("Grade is too low!");}
 
void    Bureaucrat::increment() {
/*-----------------------------*/
    std::cout << YELLOW << "Increment" << RESET << std::endl;
    if (_grade == MAX)
        throw Bureaucrat::GradeTooLowException();
    _grade -= 1;
/*----------------------------*/}

void    Bureaucrat::decrement() {
/*-----------------------------*/
    std::cout << YELLOW << "Decrement" << RESET << std::endl;
    if (_grade == MIN)
        throw Bureaucrat::GradeTooHighException();
    _grade += 1;
/*----------------------------*/}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bur)  {
/*-----------------------------------------------------------------*/
    out << CYAN << bur.getName() << MAGENTA << "'s grade is " 
    << CYAN << bur.getGrade() << RESET << std::endl;
    return (out);
/*----------------------------------------------------------------*/}
