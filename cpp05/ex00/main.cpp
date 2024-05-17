/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:33:30 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/02 16:00:44 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat m("Mo", 100);
    std::cout << "Stream test: " << m << std::endl;
    m.incrementGrade();
    std::cout << "Bur: " << m << std::endl;
    m.decrementGrade();
    std::cout << "Bur: " << m << std::endl;

    Bureaucrat a("A", 150);
    // Bureaucrat a("A", 1); Another test
    std::cout << "New: " << a << std::endl;
    try
    {
        a.decrementGrade(); // should throw
        // a.incrementGrade(); Another test
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << "New: " << a << " (Unchanged)" << std::endl;
    std::cout << "Finish\n";
    return (0);
}
