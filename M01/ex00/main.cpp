/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:52:24 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/06 15:48:54 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	Zombie	*Z_1;

	Z_1 = newZombie("Stack");
	Z_1->announce();

	randomChump("Heap");
	delete	Z_1;

	return (0);
}