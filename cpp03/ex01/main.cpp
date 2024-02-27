/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:52:08 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/27 17:14:48 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main(void)
{
    ScavTrap st("bot");
    st.attack("Tortila");
    st.takeDamage(99);
    st.takeDamage(1);
    st.beRepaired(10);
    st.takeDamage(1);
    st.guardGate();
    return 0;
}
