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

        template <class T> void    addNumber(T start, T end);

    private:
        std::vector<int>    _span;
};

#endif
