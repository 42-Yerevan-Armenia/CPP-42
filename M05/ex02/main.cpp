/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:25:32 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/20 15:36:05 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	free_data(AForm *form1, AForm *form2, AForm *form3)
{
	if (form1)
	{
		delete form1;
		form1 = NULL;
	}
	if (form2)
	{
		delete form1;
		form1 = NULL;
	}
	if (form3)
	{
		delete form1;
		form1 = NULL;
	}	
}

int main()
{
    Bureaucrat  bur1("Abel", 26);
	Bureaucrat  bur2("Bob", 73);
	Bureaucrat  bur3("Steev", 146);

	AForm		*form1 = NULL;
	AForm		*form2 = NULL;
	AForm		*form3 = NULL;
	try
    {
		form1 = new PresidentialPardonForm("PP");
		form2 = new RobotomyRequestForm("RR");
		form3 = new ShrubberyCreationForm("SC");
        std::cout << MAGENTA<< "---------------------------------------------------------------------" << std::endl;
		std::cout << bur1 << bur2 << bur3 << std::endl;
		std::cout << *form1 << *form2 << *form3 << std::endl;
		std::cout << MAGENTA<< "---------------------------------------------------------------------" << std::endl;
		bur1.execForm(*form1);
		bur2.execForm(*form2);
		bur3.execForm(*form3);
		if (bur1.getGrade() <= form1->getefgGrade())
        	bur1.signForm(*form1);
		else
		{
			while (bur1.getGrade() > form1->getsgGrade())
				bur1.increment();
			bur1.signForm(*form1);
		}
		
		if (bur2.getGrade() <= form2->getsgGrade())
        	bur2.signForm(*form2);
		else
		{
			while (bur2.getGrade() > form2->getsgGrade())
				bur2.increment();
			bur2.signForm(*form2);
		}
		
		if (bur3.getGrade() <= form1->getefgGrade())
        	bur3.execForm(*form1);
		else
		{
			while (bur3.getGrade() > form1->getefgGrade())
				bur3.increment();
			bur3.execForm(*form1);
		}
		bur3.execForm(*form3);
		std::cout << MAGENTA<< "---------------------------------------------------------------------" << std::endl;
		std::cout << bur1 << bur2 << bur3 << std::endl;
		std::cout << *form1 << *form2 << *form3 << std::endl;
		std::cout << MAGENTA<< "---------------------------------------------------------------------" << std::endl;
		free_data(form1, form2, form3);
	}
	catch(const std::exception &e)
	{
		free_data(form1, form2, form3);
		std::cout << GREEN << "❗️EXCEPTION❗️ " << RED << e.what() << std::endl;
	}
	return (0);
}
