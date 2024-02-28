/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:39:33 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/28 16:06:03 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor called\n";
    for (int i = 0; i < 100; i++)
        ideas[i] = "Idea " + std::to_string(i);
}

Brain::Brain(Brain &copy)
{
    std::cout << "Brain Copy Constructor called\n";
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called\n";
}

Brain &Brain::operator=(const Brain &b)
{
    std::cout << "Brain Assignation Operator called\n";
    for (int i = 0; i < 100; i++)
        ideas[i] = b.ideas[i];
    return *this;
}

std::string Brain::getIdea(int i) const
{
    return ideas[i];
}
