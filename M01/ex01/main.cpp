/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:13:07 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/07 15:30:26 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Z;
	int	n = 3;

	Z = zombieHorde(n, "");

	for (int i = 0; i < n; i++)
		Z[i].announce();
	
	delete[] Z;
	return (0);
}
