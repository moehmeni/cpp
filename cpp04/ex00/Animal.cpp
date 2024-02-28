/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:56:09 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/28 13:23:38 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Constructor called\n";
    type = "Animal";
}

Animal::Animal(Animal &copy)
{
    std::cout << "Animal Copy Constructor called\n";
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called\n";
}

Animal &Animal::operator=(const Animal &b)
{
    std::cout << "Animal Assignation Operator called\n";
    type = b.type;
    return *this;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal Sound\n";
}

std::string Animal::getType(void) const
{
    return type;
}
