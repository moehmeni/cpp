/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:17:57 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/28 16:04:33 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain;

public:
    Cat();
    Cat(Cat &copy);
    virtual ~Cat();
    Cat &operator=(const Cat &b);
    virtual void makeSound(void) const;
    std::string getIdea(int i) const;
};
