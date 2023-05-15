/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:05:38 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/15 18:05:39 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#include <iostream>
#include <cmath>

class Fixed {   

    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(const Fixed &fixed);
        Fixed(const int value);
        Fixed(const float value);
        Fixed   &operator=(const Fixed &fixed);

        Fixed   operator+(const Fixed &fixed) const;
        Fixed   operator-(const Fixed &fixed) const;
        Fixed   operator*(const Fixed &fixed) const;
        Fixed   operator/(const Fixed &fixed) const;
        Fixed   operator++(int);
        Fixed   operator--(int);
        Fixed   &operator++();
        Fixed   &operator--();
        
        bool    operator>(const Fixed &fixed) const;
        bool    operator<(const Fixed &fixed) const;
        bool    operator>=(const Fixed &fixed) const;
        bool    operator<=(const Fixed &fixed) const;
        bool    operator==(const Fixed &fixed) const;
        bool    operator!=(const Fixed &fixed) const;
        
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;

        static          Fixed &min(Fixed &a, Fixed &b);
        static          Fixed &max(Fixed &a, Fixed &b);
        static const    Fixed &min(Fixed const &a, Fixed const &b);
        static const    Fixed &max(Fixed const &a, Fixed const &b);

    private:
        static const int    fbn = 8;
		int				    fpv;
            };

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
