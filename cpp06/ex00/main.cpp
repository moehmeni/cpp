/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:04:37 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/06 16:29:42 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Invalid number of arguments" << std::endl;
        return (1);
    }
    ScalarConverter::convert(argv[1]);
    return (0);
}
