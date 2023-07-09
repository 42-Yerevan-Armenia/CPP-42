/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:04:55 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/09 20:22:52 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate() {

    int random = std::rand() % 4;
    Base *ptr = NULL;
    switch (random)
    {
        case 0:
            ptr = new A();
            std::cout << GREEN << "Random   " << CYAN << " A" << RESET << std::endl;
            break;
        case 1:
            ptr = new B();
            std::cout << GREEN << "Random   " << CYAN << " B" << RESET << std::endl;
            break;
        case 2:
            ptr = new C();
            std::cout << GREEN << "Random   " << CYAN << " C" << RESET << std::endl;
            break;
        case 3:
            ptr = new D();
            std::cout << RED << "Random   " << CYAN << " D" << RESET << std::endl;
            break;
        default:
            break;
    }
    return ptr;
}


void identify(Base *p)  {

    if (dynamic_cast<A*>(p))
        std::cout << MAGENTA << "Pointer  " << CYAN << " A" << RESET << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << MAGENTA << "Pointer  " << CYAN << " B" << RESET << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << MAGENTA << "Pointer  " << CYAN << " C" << RESET << std::endl;
    else
        std::cout << "❌ Ha ha ha ha ha 🗿" << std::endl;
}

void identify(Base &p) {

    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << YELLOW << "Reference" << CYAN << " A" << RESET << std::endl;
        return ;
    }
    catch (...){}
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << YELLOW << "Reference" << CYAN << " B" << RESET << std::endl;
        return ;
    }
    catch (...){}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << YELLOW << "Reference" << CYAN << " C" << RESET << std::endl;
        return ;
    }
    catch (...){}
}


int main()
{
    std::srand(static_cast<unsigned>(std::time(nullptr)));
	Base    *rand = generate();
	A    A;
	identify(*rand);
	identify(rand);
	identify(A);

	delete rand;
}

// int	main()
// {
// 	Base	*base[5];
	
// 	srand(time(NULL));
// 	std::cout << YELLOW << "---- Pointers ----" << RESET << std::endl;
// 	for (int i = 0; i < 5; ++i)
// 	{
// 		base[i] = generate();
// 		identify(base[i]);
// 	}
// 	std::cout << YELLOW << "--- Referances ---" << RESET << std::endl;
// 	for (int i = 0; i < 5; ++i)
// 	{
// 		identify(*base[i]);
// 		delete base[i];
// 	}
// 	std::cout << YELLOW << "----- Others -----" << RESET << std::endl;
// 	A	a;
// 	identify(&a);
// 	identify(a);
// 	B	b;
// 	identify(&b);
// 	identify(b);
// 	C	c;
// 	identify(&c);
// 	identify(c);

// 	return (0);
// }