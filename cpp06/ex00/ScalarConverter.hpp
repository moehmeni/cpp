/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:02:45 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/13 16:09:59 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip>

class ScalarConverter
{
    private:
        // Private memebers since we do not need them.
        ScalarConverter();
        ScalarConverter(const ScalarConverter &cpy);
        ScalarConverter &operator=(ScalarConverter &b);
    
    public:
        ~ScalarConverter();
        static void convert(std::string s);
};
