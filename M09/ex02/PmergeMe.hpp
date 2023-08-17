/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:14:50 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/17 11:06:30 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#include <iostream>
#include <iomanip>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

void mergeInsertSort(std::vector<int> &arr);
void mergeInsertSort(std::deque<int> &arr);

template<typename Container> void display(const Container &arr)
{
    typename Container::const_iterator it = arr.begin();
    if (it != arr.end())
    {
        std::cout << *it;
        ++it;
    }
    while (it != arr.end())
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << std::endl;
}

#endif
