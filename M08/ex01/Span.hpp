/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:44:09 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/02 18:38:34 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>

class Span  {

    public:
        Span();
        Span(unsigned int N);
        Span(const Span &copy);
        Span &operator=(const Span &other);
        ~Span();
        
        void    addNumber(int n);
        int     shortestSpan() const;
        int     longestSpan() const;

        std::vector<int>::iterator begin();
        std::vector<int>::iterator end();
        template <class T> void    addNumber(T start, T end);

    private:
        std::vector<int>    _span;
};

template<typename It> void	Span::addNumber(It start, It end)
{
    while (start != end)
    {
        addNumber(*start);
        ++start;
    }
}

#endif
