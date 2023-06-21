/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:33:06 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/21 15:40:20 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"//PP 25 5
#include "RobotomyRequestForm.hpp"//RR 72 45
#include "ShrubberyCreationForm.hpp"//SC 145 137

int	main()
{
	Bureaucrat	*bur;
	AForm		*form;
	Intern		intern;

	std::cout << MAGENTA<< "---------------------------------------------------------------------" << std::endl;
	form = intern.makeForm("PresidentialPardonForm", "PP");
	std::cout << MAGENTA<< "---------------------------------------------------------------------" << std::endl;
	try
	{
		bur = new Bureaucrat("Bob", 24);
		std::cout << *bur << std::endl;
		std::cout << *form << std::endl;
		std::cout << MAGENTA<< "---------------------------------------------------------------------" << std::endl;
		if (bur->getGrade() <= form->getefgGrade())
        	bur->signForm(*form);
		else
		{
			while (bur->getGrade() > form->getsgGrade())
				bur->increment();
			bur->signForm(*form);
		}
		if (bur->getGrade() <= form->getefgGrade())
        	bur->execForm(*form);
		else
		{
			while (bur->getGrade() > form->getsgGrade())
				bur->increment();
			bur->execForm(*form);
		}
		std::cout << MAGENTA<< "---------------------------------------------------------------------" << std::endl;
		std::cout << *bur << std::endl;
		std::cout << *form << std::endl;
		std::cout << MAGENTA<< "---------------------------------------------------------------------" << std::endl;
		delete bur;
	}
	catch(const std::exception &e)
	{
		std::cout << GREEN << "❗️EXCEPTION❗️ " << RED << e.what() << std::endl;
	}
	delete form;
}
