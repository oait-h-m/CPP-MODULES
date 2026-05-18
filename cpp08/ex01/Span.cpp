#include "Span.hpp"

Span::Span(unsigned int n) : _N(n) {}

Span::Span(const Span& other) : _N(other._N), nums(other.nums) {}

Span    &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _N = other._N;
        nums = other.nums;
    }
    return *this;
}

Span::~Span() {}

void    Span::addNumber(int x)
{
    if (nums.size() >= _N)
        throw std::runtime_error("Cannot add more numbers: container is full");
    nums.push_back(x);
}

int     Span::shortestSpan() const
{
    if (nums.size() < 2)
        throw std::runtime_error("No span can be found (need at least 2 numbers)");

    std::vector<int> tmp(nums);
    std::sort(tmp.begin(), tmp.end());

    int minSpan = tmp[1] - tmp[0];
    for (std::size_t i = 2; i < tmp.size(); ++i)
    {
        int diff = tmp[i] - tmp[i - 1];
        if (minSpan > diff)
            minSpan = diff;
    }
    return minSpan;
}

int Span::longestSpan() const
{
    if (nums.size() < 2)
        throw std::runtime_error("Cannot compute longest span: not enough numbers stored");

    int max = *std::max_element(nums.begin(), nums.end());
    int min = *std::min_element(nums.begin(), nums.end());

    return max - min;
}