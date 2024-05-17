/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:44:34 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/16 18:46:17 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
private:
    T *_array;
    unsigned int _size;

public:
    Array() : _array(NULL), _size(0) {}
    Array(unsigned int n) : _array(new T[n]()), _size(n) {}
    Array(const Array &src) : _array(new T[src._size]()), _size(src._size)
    {
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = src._array[i];
    }
    ~Array()
    {
        delete[] _array;
    }

    Array &operator=(const Array &src)
    {
        if (this == &src)
            return (*this);
        delete[] _array;
        _array = new T[src._size]();
        _size = src._size;
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = src._array[i];
        return (*this);
    }

    T &operator[](unsigned int i)
    {
        if (i >= _size)
            throw std::out_of_range("Index out of range");
        return (_array[i]);
    }

    unsigned int size() const
    {
        return (_size);
    }
};
