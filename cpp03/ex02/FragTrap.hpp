/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:33:29 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/27 18:35:53 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(const std::string &_name);
    FragTrap(FragTrap &copy);
    ~FragTrap();
    void highFivesGuys(void);
    FragTrap &operator=(const FragTrap &b);
};
