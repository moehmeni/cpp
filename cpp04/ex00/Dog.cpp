/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:16:31 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/28 13:18:44 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor called\n";
    type = "Dog";
}

Dog::Dog(Dog &copy)
{
    std::cout << "Dog Copy Constructor called\n";
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called\n";
}

Dog &Dog::operator=(const Dog &b)
{
    std::cout << "Dog Assignation Operator called\n";
    type = b.type;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog Sound\n";
}
