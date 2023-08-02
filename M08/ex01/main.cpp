/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:41:08 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/02 18:38:07 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

	std::vector<int>	itr;
	for (int i = 0; i < 10001; ++i)
		itr.push_back(i * 3);

    Span	big(10001);
	big.addNumber(itr.begin(), itr.end());

	std::cout << std::endl;
	std::cout << big.shortestSpan() << std::endl;
	std::cout << big.longestSpan() << std::endl;

    return 0;
}
