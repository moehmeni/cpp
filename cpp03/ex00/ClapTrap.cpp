/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:22:01 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/27 16:22:23 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name)
{
    std::cout << "Default constructor called\n";
    name = _name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
    std::cout << "Copy constructor called\n";
    name = copy.name;
    hitPoints = copy.hitPoints;
    energyPoints = copy.energyPoints;
    attackDamage = copy.attackDamage;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}

void ClapTrap::attack(const std::string &target)
{
    if (energyPoints < 1 || hitPoints < 1)
        return;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage\n";
    energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " takes damage with amount " << amount << std::endl;
    if (energyPoints < 1 || hitPoints < 1)
        return;
    hitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " gets repaired with amount " << amount << std::endl;
    if (energyPoints < 1 || hitPoints < 1)
        return;
    hitPoints += amount;
    energyPoints--;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    name = obj.name;
    hitPoints = obj.hitPoints;
    energyPoints = obj.energyPoints;
    attackDamage = obj.attackDamage;
    return *this;
}
