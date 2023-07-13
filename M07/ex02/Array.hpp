#ifndef ARRAY_HPP
# define ARRAY_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#include <iostream>
#include <cstdlib>

template <class T> class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &copy);
        Array &operator=(const Array &other);
        ~Array();

        T &operator[](int i) const;
        int  size() const;

        class except : public std::exception  {char const *what() const throw();};

    private:
        T   *_array;
        int _size;
};

#include "Array.tpp"

#endif
