/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:22:58 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/14 16:31:13 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	obj("Bob", 10);
		std::cout << obj;
		std::cout << "------------------" << std::endl;
		for (int i = 0; i < 5; i++)
			obj.decrement();
		std::cout << "------------------" << std::endl;
		std::cout << obj;
		std::cout << "------------------" << std::endl;
		for (int i = 0; i < 5; i++)
			obj.increment();
		std::cout << "------------------" << std::endl;
		std::cout << obj;
		std::cout << "------------------" << std::endl;
	}
	catch(const std::exception &exc)
		{std::cout << GREEN << "❗️EXCEPTION❗️ " << RED << exc.what() << std::endl;}
	return (0);
}
