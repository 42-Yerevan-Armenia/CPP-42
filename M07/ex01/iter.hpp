#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T> void print(T *a)
{std::cout << *a;}

template <typename T> void iter (T *a, size_t l, void (*f)(T*))
{
    for (size_t i = 0; i < l; i++)
        f(&a[i]);
}

#endif