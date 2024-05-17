/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:14:47 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/14 14:34:20 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Serializer.hpp"

uintptr_t Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

Serializer::Serializer() {}
Serializer::~Serializer() {}
Serializer::Serializer(const Serializer &src) { *this = src; }
Serializer &Serializer::operator=(const Serializer &src)
{
    (void)src;
    return (*this);
}
