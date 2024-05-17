/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:33:30 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/04 17:58:48 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"

int main(void)
{
    Intern someRandomIntern;
    AForm *rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << *rrf << std::endl;
    return (0);
}
