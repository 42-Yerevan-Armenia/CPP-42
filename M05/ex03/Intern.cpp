/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:33:14 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/21 15:02:23 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){std::cout << GREEN << "Default constructor for Intern" << RESET << std::endl;}
Intern::~Intern(){std::cout << RED << "Destructor for Intern 💀" << CYAN << RESET << std::endl;}

Intern::Intern(const Intern &other){
/*--------------------------------*/
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
    if (this != &other)
        *this = other;
/*--------------------------------*/}

Intern   &Intern::operator=(const Intern &other)  {
/*-----------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator called for " << RESET << std::endl;
     if (this == &other)
        return (*this);
    return (*this);
/*-----------------------------------------------*/}

AForm   *p(const std::string& target) {std::cout << MAGENTA << "Intern creates PPF" << std::endl; return new PresidentialPardonForm(target);}
AForm   *r(const std::string& target) {std::cout << MAGENTA << "Intern creates RRF" << std::endl; return new RobotomyRequestForm(target);}
AForm   *s(const std::string& target) {std::cout << MAGENTA << "Intern creates SCF" << std::endl; return new ShrubberyCreationForm(target);}

typedef AForm* (*TakeForm)(const std::string&);

AForm   *Intern::makeForm(std::string name, std::string target) const {
    const std::string fname[] = {
        "PresidentialPardonForm",
        "RobotomyRequestForm",
        "ShrubberyCreationForm"
    };

    TakeForm form[] = {&p, &r, &s};

    size_t num = sizeof(fname) / sizeof(fname[0]);

    for (size_t i = 0; i < num; ++i) {
        if (name == fname[i]) {
            TakeForm creator = form[i];
            return creator(target);
        }
    }
    std::cout << "Intern didn't do the : " << name << std::endl;
    return (0);
}
