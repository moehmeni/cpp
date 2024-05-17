/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:02:50 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/14 14:23:14 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

template <typename T>
static bool extract(std::string s, T &var)
{
    bool isSpecial = s == "nan" || s == "-inf" || s == "+inf" || s == "inf";
    if (!isSpecial && s.back() == 'f')
        s.pop_back();
    std::istringstream stream(s);
    stream >> var;
    std::cout << var << std::endl;
    bool res = stream.eof() && !stream.fail();
    stream.clear();
    return (res);
}

template <typename T>
static void castAndPrint(T &n)
{
    if (n <= std::numeric_limits<char>::max() && n >= std::numeric_limits<char>::min())
    {
        char c = static_cast<char>(n);
        if (n > 31 && n < 127)
            std::cout << "char: " << c << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;

    if (n <= std::numeric_limits<int>::max() && n >= std::numeric_limits<int>::min())
    {
        int i = static_cast<int>(n);
        std::cout << "int: " << i << std::endl;
    }
    else
        std::cout << "int: impossible" << std::endl;
    float f = static_cast<float>(n);
    std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
    double d = static_cast<double>(n);
    std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
}

void ScalarConverter::convert(std::string s)
{
    std::istringstream is(s);
    long i;
    float f;
    double d;
    char c;

    if (extract(s, i))
        castAndPrint(i);
    else if (extract(s, f))
        castAndPrint(f);
    else if (extract(s, d))
        castAndPrint(d);
    else if (extract(s, c))
        castAndPrint(c);
    else
        std::cout << "Conversion impossible" << std::endl;
}

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter Constructor\n";
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter Destructor\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter &cpy)
{
    (void)cpy;
    std::cout << "ScalarConverter Copy Constructor\n";
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &b)
{
    (void)b;
    std::cout << "ScalarConverter = assignment overload called\n";
    return (*this);
}
