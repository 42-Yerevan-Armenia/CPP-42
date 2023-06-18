/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:22:51 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/18 16:09:11 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
    {
        Bureaucrat  bur1("Abel", 80);
		Bureaucrat  bur2("Bob", 20);
        Form        form1("B2", 60, 100);
		Form        form2("B1", 50, 100);
        Form        form3("A2", 8, 20);
        Form        form4("A1", 10, 20);
        std::cout << "---------------------------------------------------------------------" << std::endl;
		std::cout << bur1 << bur2 << std::endl;
		std::cout << form1 << form2 << std::endl;
		std::cout << "---------------------------------------------------------------------" << std::endl;
		if (bur1.getGrade() <= form1.getsgGrade())
        	bur1.signForm(form1);
		else
		{
			while (bur1.getGrade() > form1.getsgGrade())
				bur1.increment();
			bur1.signForm(form1);
		}
		if (bur2.getGrade() <= form3.getsgGrade())
        	bur2.signForm(form3);
		else
		{
			while (bur2.getGrade() > form3.getsgGrade())
				bur2.increment();
			bur2.signForm(form3);
		}
		std::cout << "---------------------------------------------------------------------" << std::endl;
		std::cout << bur1 << bur2 << std::endl;
		std::cout << form1 << form3 << std::endl;
		std::cout << "---------------------------------------------------------------------" << std::endl;
		if (bur1.getGrade() <= form2.getsgGrade())
        	bur1.signForm(form2);
		else
			bur1.signForm(form2);
		if (bur2.getGrade() <= form4.getsgGrade())
        	bur2.signForm(form4);
		bur2.signForm(form4);
		std::cout << "---------------------------------------------------------------------" << std::endl;
		std::cout << bur1 << bur2 << std::endl;
		std::cout << form2 << form4 << std::endl;
		std::cout << "---------------------------------------------------------------------" << std::endl;
    }
	catch(const std::exception &e)
		{std::cout << GREEN << "❗️EXCEPTION❗️ " << RED << e.what() << std::endl;}
	return (0);
}
