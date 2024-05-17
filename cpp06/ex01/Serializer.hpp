/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:09:47 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/14 14:26:06 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "./Data.hpp"

class Serializer
{
private:
    Serializer();
    Serializer(const Serializer &src);
    Serializer &operator=(const Serializer &src);

public:
    ~Serializer();
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};
