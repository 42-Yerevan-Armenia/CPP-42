/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:28:01 by arakhurs          #+#    #+#             */
/*   Updated: 2023/06/09 16:39:15 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound(); //will output the cat sound!
    meta->makeSound();

    const WrongAnimal* animalanimal = new WrongAnimal();
    const WrongAnimal* animalcat = new WrongCat();
    // const WrongCat* catcat = new WrongCat();
    std::cout << animalcat->getType() << " " << std::endl;
    
    // catcat->makeSound();
    animalcat->makeSound();
    animalanimal->makeSound();
    return 0;
}