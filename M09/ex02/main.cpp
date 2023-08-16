/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:14:48 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/16 20:03:00 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "❌ Error: Invalid input." << std::endl;
        return (1);
    }

    std::vector<int> sorting;
    for (int i = 1; i < ac; ++i)
    {
        int num = std::atoi(av[i]);
        if (num <= 0)
        {
            std::cerr << "❌ Error: Invalid input." << std::endl;
            return (1);   
        }
        sorting.push_back(num);
    }
    std::cout << GREEN << "BEFORE: " << MAGENTA;
    display(sorting);

    std::vector<int> copy = sorting;
    clock_t start_time = clock();
    mergeInsertSort(copy);
    clock_t end_time = clock();
    double  vector_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
    std::cout << GREEN << "AFTER:  " << YELLOW;
    display(copy);
    std::cout << GREEN << "Time to process with vector container: " << CYAN << std::fixed << std::setprecision(5) << vector_time << GREEN << " seconds" << RESET << std::endl;

    // std::cout << std::endl;
    // std::cout << GREEN << "BEFORE: " << MAGENTA;
    // display(sorting);

    std::deque<int> dcopy(sorting.begin(), sorting.end());
    start_time = clock();
    mergeInsertSort(dcopy);
    end_time = clock();
    double  deque_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
    // std::cout << GREEN << "AFTER: " << YELLOW;
    // display(dcopy);
    std::cout << GREEN << "Time to process with deque container:  " << CYAN << std::fixed << std::setprecision(5) << deque_time << GREEN << " seconds" << RESET << std::endl;
  
    return (0);
}
