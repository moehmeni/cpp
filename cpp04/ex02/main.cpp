/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:52:08 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/28 16:17:32 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"

int main(void)
{
   // Animal animal; // Won't compile since Animal is an abstract class
   
   // But this will compile, since Dog and Cat are not abstract classes -
   // and are just derived classes.
   Cat cat;
   Dog dog;
   
   return 0;
}
