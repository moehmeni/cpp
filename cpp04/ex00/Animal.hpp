/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:53:03 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/27 18:55:41 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
public:
    Animal();
    Animal(Animal &copy);
    virtual ~Animal();
    Animal &operator=(const Animal &b);
    virtual void makeSound(void) const;
    std::string getType(void) const;

protected:
    std::string type;
};
