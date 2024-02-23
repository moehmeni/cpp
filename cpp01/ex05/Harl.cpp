/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:18:09 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/22 22:40:40 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

void Harl::debug()
{
    std::cout << "This is debug.\n";
}

void Harl::info()
{
    std::cout << "This is info.\n";
}

void Harl::warning()
{
    std::cout << "This is warning.\n";
}
void Harl::error()
{
    std::cerr << "This is error.\n";
}

void Harl::compile(std::string level)
{
    void (Harl::*m[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"debug", "info", "warning", "error"};
    for (std::size_t i = 0; i < levels->size(); i++)
        if (level == levels[i])
            (this->*m[i])();
}
