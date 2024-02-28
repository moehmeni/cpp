/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:17:50 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/28 16:18:08 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Constructor called\n";
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(Cat &copy)
{
    std::cout << "Cat Copy Constructor called\n";
    type = copy.type;
    brain = new Brain(*copy.brain); // Deep copy
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor called\n";
}

Cat &Cat::operator=(const Cat &b)
{
    std::cout << "Cat Assignation Operator called\n";
    type = b.type;
    brain = new Brain(*b.brain); // Deep copy
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat Sound\n";
}

std::string Cat::getIdea(int i) const
{
    return brain->getIdea(i);
}
