/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:49:11 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/14 15:50:19 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "./A.hpp"
#include "./B.hpp"
#include "./C.hpp"

Base *generate(void)
{
    std::cout << "(random generated type is ";
    switch (rand() % 3)
    {
    case 0:
        std::cout << "A)\n";
        return (new A());
    case 1:
        std::cout << "B)\n";
        return (new B());
    case 2:
        std::cout << "C)\n";
        return (new C());
    default:
        return (NULL);
    }
}

void identify(Base *p)
{
    std::cout << "identify(Base *p) = ";
    if (dynamic_cast<A *>(p) != nullptr)
        std::cout << "A ";
    else if (dynamic_cast<B *>(p) != nullptr)
        std::cout << "B ";
    else if (dynamic_cast<C *>(p) != nullptr)
        std::cout << "C ";
    std::cout << std::endl;
}

void identify(Base &p)
{
    std::cout << "identify(Base &p) = ";
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "A ";
    }
    catch (std::bad_cast &e)
    {
    }
    try
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "B ";
    }
    catch (std::bad_cast &e)
    {
    }
    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "C ";
    }
    catch (std::bad_cast &e)
    {
    }
    std::cout << std::endl;
}

int main(void)
{
    srand(time(NULL));
    Base *randomInstance = generate();
    identify(randomInstance);
    identify(*randomInstance);
    return (0);
}
