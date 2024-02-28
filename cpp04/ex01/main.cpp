/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:52:08 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/28 16:07:35 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"

int main(void)
{
   Animal *arr[10];

   for (int i = 0; i < 10; i++)
   {
      if (i < 5)
         arr[i] = new Cat();
      else
         arr[i] = new Dog();
   }

   std::cout << std::endl;
   for (int i = 0; i < 5; i++)
      std::cout << "Cat " << i << ": " << (static_cast<Cat *>(arr[i]))->getIdea(i) << "\n";

   std::cout << std::endl;
   for (int i = 5; i < 10; i++)
      std::cout << "Dog " << i << ": " << (static_cast<Dog *>(arr[i]))->getIdea(i) << "\n";

   std::cout << std::endl;
   for (int i = 0; i < 10; i++)
      delete arr[i];
   return 0;
}
