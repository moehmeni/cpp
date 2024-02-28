/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:16:38 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/28 13:19:42 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(Dog &copy);
    virtual ~Dog();
    Dog &operator=(const Dog &b);
    virtual void makeSound(void) const;
};
