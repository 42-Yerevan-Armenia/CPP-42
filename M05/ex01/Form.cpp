/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:23:03 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/21 15:46:41 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _signed_grade(20) , _executed_fgrade(8) {_boolean = false; std::cout << GREEN << "Default constructor for Form" << RESET << std::endl;}
Form::~Form(){std::cout << RED << "Destructor for Form 💀" << CYAN << _fname << RESET << std::endl;}

Form::Form(const Form &other) :_fname(other.getFName()), _signed_grade(other.getsgGrade()) , _executed_fgrade(other.getefgGrade()) {
/*--------------------------------------------------------------------------------------------------------------------------------*/
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
    if (_signed_grade > MIN || _executed_fgrade > MIN)
        throw GradeTooLowException();
    if (_signed_grade < MAX || _executed_fgrade < MAX)
        throw GradeTooHighException();
    if (this != &other)
        *this = other;
/*--------------------------------------------------------------------------------------------------------------------------------*/}

Form   &Form::operator=(const Form &other)  {
/*-----------------------------------------*/
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
/*-----------------------------------------*/}

Form::Form(std::string const str, int sg, int efg): _fname(str), _signed_grade(sg) , _executed_fgrade(efg)  {
/*---------------------------------------------------------------------------------------------------------*/
    std::cout << GREEN << "Constructor for Form " << CYAN << str << std::endl;
    _boolean = false;
    if (sg > MIN || efg > MIN)
        throw GradeTooLowException();
    if (sg < MAX || efg < MAX)
        throw GradeTooHighException();    
/*--------------------------------------------------------------------------------------------------------*/}

std::string const Form::getFName()   const {return (_fname);}
bool              Form::getFGrade()  const {return (_boolean);}
int               Form::getsgGrade() const {return (_signed_grade);}
int               Form::getefgGrade()const {return (_executed_fgrade);}

void              Form::setFName(std::string const name)    {std::string *tmp = (std::string *)&_fname; *tmp = name;}
void              Form::setsgGrade(int n)                   {int *tmp = (int *)&_signed_grade;          *tmp = n;}
void              Form::setefgGrade(int n)                  {int *tmp = (int *)&_executed_fgrade;       *tmp = n;}

char        const *Form::GradeTooHighException::what() const throw(){return ("Form grade is too high 📈❗️");}
char        const *Form::GradeTooLowException::what()  const throw(){return ("Form grade is too low 📉❗️");}
char        const *Form::SignedException::what()       const throw(){return ("Form is already signed❗️");}

void    Form::beSigned(const Bureaucrat &target)  {
/*-----------------------------------------------*/
    if (_boolean)
        throw SignedException();
    if (target.getGrade() <= _signed_grade)
        _boolean = true;
    else
        throw GradeTooLowException();
/*----------------------------------------------*/}

std::ostream &operator<<(std::ostream &out, Form const &f)  {
/*---------------------------------------------------------*/
    const int wh = 15;

    out << MAGENTA << "Form " << CYAN << f.getFName() << MAGENTA << " Bureaucrat 📝 ";
    if (f.getFGrade())
        out << "✅ | ";
    else
        out << "❌ | ";
    out << std::setw(wh) << std::right << "Signed grade: " << CYAN << std::setw(3) << f.getsgGrade() << MAGENTA << " | ";
    out << std::setw(wh) << std::right << "Executed grade: " << CYAN << std::setw(3) << f.getefgGrade() << MAGENTA << " | " << std::endl;
    return (out);
/*--------------------------------------------------------*/}
