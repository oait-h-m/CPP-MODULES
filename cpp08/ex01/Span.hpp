#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <iostream>
#include <algorithm>

class Span
{
private:
    unsigned int _N;
    std::vector<int> nums;

public:
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
    
    void    addNumber(int n);
    int     shortestSpan() const;
    int     longestSpan() const;
};

#endif