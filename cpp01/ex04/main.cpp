/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:12:51 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/22 18:32:55 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
        return (std::cerr << "Invalid number of arguments.\n", 1);
    if (!*argv[2])
        return (std::cerr << "You wanna search for null string?!\n", 1);
    std::string fileName(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::size_t s1Len = s1.length();
    std::ifstream inputFile(fileName);
    if (!inputFile)
        return (std::cerr << "Invalid input file.\n", 1);
    std::ofstream outputFile(fileName + ".replace");
    std::string line;
    while (std::getline(inputFile, line))
    {
        std::size_t pos = 0;
        while ((pos = line.find(s1)) != std::string::npos)
            line.erase(pos, s1Len).insert(pos, s2);
        if (pos == std::string::npos)
            outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
    return 0;
}
