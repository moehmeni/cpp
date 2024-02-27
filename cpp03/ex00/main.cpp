/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:52:08 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/26 21:58:14 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

int main(void)
{
    ClapTrap c("Clap1");
    c.attack("Clap2");
    c.takeDamage(9);
    c.takeDamage(1);
    c.beRepaired(10);
    c.takeDamage(1);

    return 0;
}
