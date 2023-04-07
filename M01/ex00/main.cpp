/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:52:24 by arakhurs          #+#    #+#             */
/*   Updated: 2023/04/07 11:41:43 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*Z;

	Z = newZombie("Stack");
	Z->announce();

	randomChump("Heap");
	delete	Z;

	return (0);
}
