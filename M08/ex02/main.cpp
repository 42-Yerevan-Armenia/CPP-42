/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:51:55 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/28 16:12:10 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << ' ' << *it;
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
	while (!s.empty())
	{
		std::cout << ' ' << s.top();
		s.pop();	
	}
	std::cout << std::endl;
	// list test
	std::cout << "list test:" << std::endl;
	std::list<int> l;
	l.push_back(5);
	l.push_back(17);
	std::cout << l.back() << std::endl;
	l.pop_back();
	std::cout << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	//[...]
	l.push_back(0);
	std::list<int>::iterator lit = l.begin();
	std::list<int>::iterator lite = l.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << ' ' << *lit;
		++lit;
	}
	std::cout << std::endl;
	return (0);
}