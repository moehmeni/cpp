/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:16:09 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/19 15:03:38 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);