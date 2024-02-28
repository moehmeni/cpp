/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:53:03 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/28 16:13:23 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(Animal &copy);
    virtual ~Animal();
    Animal &operator=(const Animal &b);
    virtual void makeSound(void) const = 0; // Pure virtual member function
    std::string getType(void) const;
};
