/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:10:08 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/19 15:18:11 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie * horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        horde[i].setName(name);
    return horde;
}
