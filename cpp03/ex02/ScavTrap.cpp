/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:02:56 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/27 17:02:40 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &_name) : ClapTrap(_name)
{
    std::cout << "ScavTrap default constructor called\n";
    name = _name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called\n";
    name = copy.name;
    hitPoints = copy.hitPoints;
    energyPoints = copy.energyPoints;
    attackDamage = copy.attackDamage;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::attack(std::string const &target)
{
    if (energyPoints < 1 || hitPoints < 1)
    {
        return;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage\n";
    energyPoints -= 1;
}

void ScavTrap::guardGate(void)
{
    std::cout << name << " has guard\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &b)
{
    name = b.name;
    hitPoints = b.hitPoints;
    energyPoints = b.energyPoints;
    attackDamage = b.attackDamage;
    return *this;
}
