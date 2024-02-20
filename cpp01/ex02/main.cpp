/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:21:19 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/19 17:33:27 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << "str value: " << s << std::endl;
    std::cout << "ptr value: " << *stringPTR << std::endl;
    std::cout << "ref value: " << stringREF << std::endl;

    std::cout << "str addr: " << &s << std::endl;
    std::cout << "ptr addr: " << stringPTR << std::endl;
    std::cout << "ref addr: " << &stringREF << std::endl;
    return 0;
}
