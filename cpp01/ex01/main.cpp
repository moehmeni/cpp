/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:37:54 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/19 15:19:54 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(void)
{
    Zombie *horde = zombieHorde(10, "ZombieHorde");
    for (int i = 0; i < 10; i++)
        horde[i].announce();
    delete[] horde;
    return 0;
}