/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:26:48 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/21 15:45:13 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _signed_grade(20) , _executed_fgrade(8) {_boolean = false; std::cout << GREEN << "Default constructor for AForm" << RESET << std::endl;}
AForm::~AForm(){std::cout << RED << "Destructor for AForm 💀" << CYAN << _fname << RESET << std::endl;}

AForm::AForm(const AForm &other) :_fname(other.getFName()), _signed_grade(other.getsgGrade()) , _executed_fgrade(other.getefgGrade()) {
/*-----------------------------------------------------------------------------------------------------------------------------------*/
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
    if (_signed_grade > MIN || _executed_fgrade > MIN)
        throw GradeTooLowException();
    if (_signed_grade < MAX || _executed_fgrade < MAX)
        throw GradeTooHighException();
    if (this != &other)
        *this = other;
/*-----------------------------------------------------------------------------------------------------------------------------------*/}

AForm   &AForm::operator=(const AForm &other)  {
/*--------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator called for " << _fname << RESET << std::endl;
     if (this == &other)
        return (*this);
    if (_signed_grade > MIN || _executed_fgrade > MIN)
        throw GradeTooLowException();
    if (_signed_grade < MAX || _executed_fgrade < MAX)
        throw GradeTooHighException();
    setFName(other.getFName());
    _boolean = other.getFGrade();
    setsgGrade(other.getsgGrade());
    setefgGrade(other.getefgGrade());
    return (*this);
/*-------------------------------------------*/}

AForm::AForm(std::string const str, int sg, int efg): _fname(str), _signed_grade(sg) , _executed_fgrade(efg)  {
/*-----------------------------------------------------------------------------------------------------------*/
    std::cout << GREEN << "Constructor for AForm " << CYAN << str << std::endl;
    _boolean = false;
    if (sg > MIN || efg > MIN)
        throw GradeTooLowException();
    if (sg < MAX || efg < MAX)
        throw GradeTooHighException();    
/*----------------------------------------------------------------------------------------------------------*/}

std::string const AForm::getFName()   const {return (_fname);}
bool              AForm::getFGrade()  const {return (_boolean);}
int               AForm::getsgGrade() const {return (_signed_grade);}
int               AForm::getefgGrade()const {return (_executed_fgrade);}

void              AForm::setFName(std::string const name)    {std::string *tmp = (std::string *)&_fname; *tmp = name;}
void              AForm::setsgGrade(int n)                   {int *tmp = (int *)&_signed_grade;          *tmp = n;}
void              AForm::setefgGrade(int n)                  {int *tmp = (int *)&_executed_fgrade;       *tmp = n;}

char        const *AForm::GradeTooHighException::what() const throw(){return ("AForm grade is too high 📈❗️");}
char        const *AForm::GradeTooLowException::what()  const throw(){return ("AForm grade is too low 📉❗️");}
char        const *AForm::SignedException::what()       const throw(){return ("AForm is already signed❗️");}
char        const *AForm::ExecuteException::what()       const throw(){return ("AForm is not high enough for execute❗️");}

void    AForm::beSigned(const Bureaucrat &target)  {
/*------------------------------------------------*/
    if (_boolean)
        throw SignedException();
    if (target.getGrade() <= _signed_grade)
        _boolean = true;
    else
        throw GradeTooLowException();
/*-----------------------------------------------*/}

void    AForm::execute(Bureaucrat const &executor) const   {
/*--------------------------------------------------------*/
    if (_boolean && executor.getGrade() <= _executed_fgrade)
        throw ExecuteException();
/*-------------------------------------------------------*/}

std::ostream &operator<<(std::ostream &out, AForm const &f)  {
/*----------------------------------------------------------*/
    out << MAGENTA << "AForm " << CYAN << f.getFName() << MAGENTA << " Bureaucrat 📝 ";
    if (f.getFGrade())
        out << "✅ | ";
    else
        out << "❌ | ";
    out << std::setw(15) << std::right << "Signed grade: " << CYAN << std::setw(3) << f.getsgGrade() << MAGENTA << " | ";
    out << std::setw(15) << std::right << "Executed grade: " << CYAN << std::setw(3) << f.getefgGrade() << MAGENTA << " | " << std::endl;
    return (out);
/*---------------------------------------------------------*/}
