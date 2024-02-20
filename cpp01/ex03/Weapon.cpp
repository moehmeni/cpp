/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:34:44 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/19 20:04:12 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    type = _type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon " << type << " got destroyed." << std::endl;
}

const std::string &Weapon::getType()
{
    const std::string &typeRef = type;
    return typeRef;
}

void Weapon::setType(std::string _type)
{
    type = _type;
}
