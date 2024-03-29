/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:07:29 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/28 16:03:44 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>   Array<T>::Array() : _array(NULL), _size(0) {std::cout << GREEN << "Default constructor called" << RESET << std::endl;}
template <typename T>   Array<T>::~Array(){std::cout << RED << "Destructor called 💀" << RESET << std::endl; delete [] _array;}
template <typename T>   Array<T>::Array(unsigned int n) : _size(n) {_array = new T[_size]();}
template <typename T>   int  Array<T>::size() const {return _size;}
template <typename T>   char const* Array<T>::except::what() const throw()  {return ("❌ Out of range");}

template <typename T>   Array<T>::Array(const Array &copy) : _size(copy.size()) {
/*-----------------------------------------------------------------------------*/
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
    _array = new T[_size]();
    for (int i = 0; i < _size; i++)
        _array[i] = copy._array[i];
/*----------------------------------------------------------------------------*/}

template <typename T>   Array<T> &Array<T>::operator=(const Array<T> &other)    {
/*-----------------------------------------------------------------------------*/
    std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
    delete [] _array;
    _size = other.size();
    _array = new T[_size]();
    for (int i = 0; i < _size; i++)
        _array[i] = other._array[i];
    return (*this);
/*----------------------------------------------------------------------------*/}

template <typename T>   T &Array<T>::operator[](const int i) const  {
/*-----------------------------------------------------------------*/
    if (i < 0 || i > size() - 1)
        throw Array<T>::except();
    return _array[i];
/*----------------------------------------------------------------*/}

#endif
