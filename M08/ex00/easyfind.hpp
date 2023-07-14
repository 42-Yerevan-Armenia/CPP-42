#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int i);

#include "easyfind.tpp"

#endif
