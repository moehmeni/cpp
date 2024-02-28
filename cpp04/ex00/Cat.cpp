/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:17:50 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/28 13:18:34 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Constructor called\n";
    type = "Cat";
}

Cat::Cat(Cat &copy)
{
    std::cout << "Cat Copy Constructor called\n";
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called\n";
}

Cat &Cat::operator=(const Cat &b)
{
    std::cout << "Cat Assignation Operator called\n";
    type = b.type;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat Sound\n";
}
