/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:52:08 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/28 13:20:33 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"

int main(void)
{
   const Animal *meta = new Animal();
   const Animal *j = new Dog();
   const Animal *i = new Cat();
   std::cout << j->getType() << " " << std::endl;
   std::cout << i->getType() << " " << std::endl;
   i->makeSound();
   j->makeSound();
   meta->makeSound();

   delete meta;
   delete j;
   delete i;
   return 0;
}
