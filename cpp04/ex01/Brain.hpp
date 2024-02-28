/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:39:24 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/28 16:05:55 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    ~Brain();
    Brain(Brain &copy);
    Brain &operator=(const Brain &b);
    std::string getIdea(int i) const;
};
