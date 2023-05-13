/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:35:15 by arakhurs          #+#    #+#             */
/*   Updated: 2023/05/13 16:44:23 by arakhurs         ###   ########.fr       */
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

class Fixed {   

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

    private:
        static const int    fbn = 8;
		int				    fpv;
            };
#endif
