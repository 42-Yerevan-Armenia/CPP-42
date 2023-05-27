/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:28:01 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/27 20:54:15 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* x = new Dog();
    const Animal* y = new Cat();
    delete x;//should not create a leak
    delete y;
    std::cout << "***************" << std::endl;

    Animal *arr[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            arr[i] = new Cat();
        else
            arr[i] = new Dog(); 
        std::cout << "-------------" << std::endl;
    }
    for (int i = 0; i < 10; i++)
        delete arr[i];
    system("leaks abstract");
}
