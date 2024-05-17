/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:26:42 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/15 10:35:55 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./whatever.hpp"

int main(void)
{
    int a = 3;
    int b = 2;

    std::cout << "a: " << a << " b: " << b << std::endl;
    std::cout << "min(" << a << ", " << b << ") = " << min(a, b) << std::endl;
    std::cout << "max(" << a << ", " << b << ") = " << max(a, b) << std::endl;
    std::cout << "lets swap now\n";
    swap(a, b);
    std::cout << "a: " << a << " b: " << b << std::endl;
    std::cout << "testing equal a and b\n";
    a = 2;
    b = 2;
    std::cout << "min(" << a << ", " << b << ") = " << min(a, b) << std::endl;
    std::cout << "max(" << a << ", " << b << ") = " << max(a, b) << std::endl;
    return (0);
}
