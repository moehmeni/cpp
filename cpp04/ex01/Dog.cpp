/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:16:31 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/28 16:05:00 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor called\n";
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(Dog &copy)
{
    std::cout << "Dog Copy Constructor called\n";
    type = copy.type;
    brain = new Brain(*copy.brain); // Deep copy
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor called\n";
}
    
Dog &Dog::operator=(const Dog &b)
{
    std::cout << "Dog Assignation Operator called\n";
    type = b.type;
    brain = new Brain(*b.brain); // Deep copy
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog Sound\n";
}

std::string Dog::getIdea(int i) const
{
    return brain->getIdea(i);
}
