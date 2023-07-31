/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:42:21 by arakhurs          #+#    #+#             */
/*   Updated: 2023/07/28 16:11:30 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){_span.reserve(0);}
Span::Span(unsigned int N){_span.reserve(N);}
Span::~Span(){}

Span::Span(const Span &copy)
{
	_span.reserve(copy._span.capacity());
	_span = copy._span;
}

Span	&Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_span.clear();
		_span.reserve(other._span.capacity());
		_span = other._span;
	}
	return (*this);
}

void    Span::addNumber(int n)	{

	if (_span.size() == _span.capacity())
		throw std::overflow_error("❌ add number stop working");
	_span.push_back(n);
	std::sort(_span.begin(), _span.end());
}

int     Span::shortestSpan() const	{

	int	min;

	if (_span.size() < 2)
		throw std::logic_error("❌ shortest span stop working");
	min = _span[1] - _span[0];
	for (size_t i = 2; i < _span.size(); i++)
	{
		if (min > _span[i] - _span[i - 1])
			min = _span[i] - _span[i - 1];
	}
	return (min);
}

int     Span::longestSpan() const	{

	if (_span.size() < 2)
		throw std::logic_error("❌ longest span stop working");
	return (_span.back() - _span.front());
}

template <class T> void    addNumber(T start, T end)
{
	for (; start != end; start++)
		addNumber(*end);
}
