/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:12:51 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/20 19:56:44 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
        return (std::cerr << "Invalid number of arguments.\n", 1);
    std::string fileName(argv[1]);
    std::ifstream inputFile(fileName);
    std::ofstream outputFile(fileName + ".replace");
    if (!inputFile || !outputFile)
        return (std::cerr << "Error opening files.\n", 1);
    std::string line;
    while (std::getline(inputFile, line))
    {
        std::size_t pos = -1;
        pos = line.find(argv[2], pos + 1);
        if (pos != std::string::npos)
        {
            
        } else {
            outputFile << line;
        }
        
    }
    inputFile.close();
    outputFile.close();
    return 0;
}
