/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:09:01 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/28 16:03:25 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int main()
{
    std::cout << std::endl << YELLOW << "====== CONSTRUCTORS ======" << std::endl << std::endl;

    Array<int> *a = new Array<int>;
    std::cout << MAGENTA << "Sizeof(a) = " << CYAN << a->size() << RESET << std::endl;

    Array<int> b(8);
    for (int i = 0; i < b.size(); i++)
        b[i] = i * 2;
    std::cout << MAGENTA << "Sizeof(b) = " << CYAN << b.size() << RESET << std::endl;
    for (int i = 0; i < b.size(); i++)
        std::cout << MAGENTA << "[" << i << "]" << CYAN << b[i] << RESET << std::endl;

    std::cout << std::endl << YELLOW << "======= COPY/ASIGN =======" << std::endl << std::endl;

    Array<int>  *c = new Array<int>(b);
    for (int i = 0; i < c->size(); i++)
        std::cout << MAGENTA << "[" << i << "]" << CYAN << (*c)[i] << RESET << std::endl;

    Array<int>  d(6);
    for (int i = 0; i < d.size(); i++)
        d[i] = i;
    b = d;
    std::cout << MAGENTA << "Sizeof(b) = " << CYAN << b.size() << RESET << std::endl;
    for (int i = 0; i < b.size(); i++)
        std::cout << MAGENTA << "[" << i << "]" << CYAN << b[i] << RESET << std::endl;

    std::cout << std::endl << YELLOW << "========= STRING =========" << std::endl << std::endl;

    Array<std::string>  str(3);
    str[0] = "Some";
    str[1] = " ";
    str[2] = "Text";

    std::string line = str[0] + str[1] + str[2];
    std::cout << MAGENTA << "Sizeof(str) = " << CYAN << str.size() << RESET << std::endl;
    std::cout << MAGENTA << GREEN << line << RESET << std::endl;
    
    delete a;
    delete c;

    try
    {
        std::cout << b[b.size()] << std::endl << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
