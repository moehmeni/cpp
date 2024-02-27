/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:02:54 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/27 16:51:26 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(const std::string &_name);
        ScavTrap(ScavTrap &copy);
        ~ScavTrap();
        void attack(std::string const &target);
        void guardGate(void);
        ScavTrap &operator=(const ScavTrap &b);
};
