/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:42:04 by arakhurs          #+#    #+#             */
/*   Updated: 2023/02/22 15:56:31 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;

    int i = 1;
    while (i < ac)
    {
        int j = 0;
        while (av[i][j] != '\0')
        {
            if (av[i][j] >= 'a' && av[i][j] <= 'z')
            {
                av[i][j] -= 32;
                std::cout << av[i][j];
            }
            else
                std::cout << av[i][j];
            j++;
        }
    i++;
    }
	std::cout << std::endl;
    return 0;
}