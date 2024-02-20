/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:35:15 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/19 18:10:14 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon weapon;

public:
    HumanA(std::string _name, Weapon &_weapon);
    ~HumanA();
    void attack();
};
