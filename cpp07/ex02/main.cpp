/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:56:12 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/16 18:53:35 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
    Array<int> intArray(5);
    Array<std::string> stringArray(5);
    Array<int> intArrayZero(0);
    Array<int> emptyArray;

    // fill the arrays
    for (unsigned int i = 0; i < intArray.size(); i++)
        intArray[i] = i;
    for (unsigned int i = 0; i < stringArray.size(); i++)
        stringArray[i] = "string" + std::to_string(i);

    // print the arrays
    std::cout << "Printing intArray" << std::endl;
    for (unsigned int i = 0; i < intArray.size(); i++)
        std::cout << intArray[i] << std::endl;

    std::cout << "Printing stringArray" << std::endl;
    for (unsigned int i = 0; i < stringArray.size(); i++)
        std::cout << stringArray[i] << std::endl;

    // try to access an element out of range
    std::cout << "Trying to access an element out of range" << std::endl;
    try
    {
        std::cout << intArray[10] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return (0);
}
