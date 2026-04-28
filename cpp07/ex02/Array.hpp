#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
private:
    T*           _data;
    unsigned int _size;

public:
    Array();
    Array(unsigned int n);
    Array(const Array &other);
    Array &operator=(const Array &other);
    ~Array();

    unsigned int size() const;
    T& operator[](unsigned int i);
    const T& operator[](unsigned int i) const;

};

template <typename T>
Array<T>::Array() : _data(0), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _data(0), _size(n)
{
    if (_size == 0)
        _data = 0;
    else
        _data = new T[_size];
}

template <typename T>
Array<T>::Array(const Array &other) : _data(0), _size(0)
{
    *this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this == &other)
        return *this;

    delete[] _data;
    _size = other._size;

    if (_size == 0)
        _data = 0;
    else
        _data = new T[_size];

    for (unsigned int i = 0; i < _size; ++i)
        _data[i] = other._data[i];

    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _data;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
    if (i >= _size)
        throw std::exception();
    return _data[i];
}

template <typename T>
const T& Array<T>::operator[](unsigned int i) const
{
    if (i >= _size)
        throw std::exception();
    return _data[i];
}

#endif