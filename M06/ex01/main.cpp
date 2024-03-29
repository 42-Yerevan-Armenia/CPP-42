/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:30:14 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/09 16:27:25 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

void test(Data *originalPtr) {
    std::cout << YELLOW << "Original Pointer:     " << originalPtr << RESET << std::endl;

    uintptr_t serializedPtr = Serializer::serialize(originalPtr);
    std::cout << MAGENTA << "Serialized Pointer:   " << serializedPtr << RESET << std::endl;

    Data *deserializedPtr = Serializer::deserialize(serializedPtr);
    std::cout << MAGENTA << "Deserialized Pointer: " << deserializedPtr << RESET << std::endl;

    if (deserializedPtr == originalPtr)
        std::cout << CYAN << "Serializer and deserializer successful!" << RESET << std::endl;
    else
        std::cout << RED << "Serializer and deserializer failed!" << RESET << std::endl;
}

int main() {
    Data obj1;
    obj1.value = 42;

    Data obj2;
    obj2.value = 99;

    std::cout << GREEN << "Testing Serializer and Deserializer" << RESET << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    std::cout << GREEN << "Test 1: Serialize and Deserialize obj1" << RESET << std::endl;
    test(&obj1);
    std::cout << "---------------------------------------" << std::endl;

    std::cout << GREEN << "Test 2: Serialize and Deserialize obj2" << RESET << std::endl;
    test(&obj2);
    std::cout << "---------------------------------------" << std::endl;

    return 0;
}
