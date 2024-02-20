/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:37:54 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/19 15:05:22 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(void)
{
    Zombie *zp = newZombie("Heap Zombie");
    zp->announce();
    delete zp;

    randomChump("Stack Zombie");

    return 0;
}