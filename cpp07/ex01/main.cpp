/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:39:04 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/16 18:42:06 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void print(int i)
{
    std::cout << i << std::endl;
}

// print with const parameter
void printConst(const int i)
{
    std::cout << i << std::endl;
}

// print with class
class Printer
{
public:
    void operator()(int i) const
    {
        std::cout << i << std::endl;
    }
};

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    std::cout << "Printing array using iter function" << std::endl;
    iter(array, 5, print);
    std::cout << "Printing array using iter function with const parameter" << std::endl;
    iter(array, 5, printConst);
    std::cout << "Printing array using iter function with class" << std::endl;
    iter(array, 5, Printer());
    return (0);
}
