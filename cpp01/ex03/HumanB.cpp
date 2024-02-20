/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:35:52 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/19 20:06:26 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

HumanB::HumanB(std::string _name)
{
    name = _name;
}

HumanB::~HumanB()
{
    std::cout << name << " died." << std::endl;
}

void HumanB::setWeapon(Weapon &_weapon)
{
    weapon = &_weapon;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
