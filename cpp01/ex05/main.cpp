/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:37:41 by mmomeni           #+#    #+#             */
/*   Updated: 2024/02/22 22:39:49 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int main(void)
{
    Harl h;

    h.compile("debug");
    h.compile("info");
    h.compile("warning");
    h.compile("error");
    h.compile("test");
    return 0;
}
