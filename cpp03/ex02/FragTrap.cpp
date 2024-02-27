/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:33:39 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/27 18:36:40 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap(const std::string &_name) : ClapTrap(_name)
{
    std::cout << "FragTrap " << name << " is created" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap " << name << " is created" << std::endl;
    hitPoints = copy.hitPoints;
    energyPoints = copy.energyPoints;
    attackDamage = copy.attackDamage;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " is destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " is requesting high fives" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &b)
{
    name = b.name;
    hitPoints = b.hitPoints;
    energyPoints = b.energyPoints;
    attackDamage = b.attackDamage;
    return *this;
}
