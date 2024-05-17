/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:33:30 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/03 16:52:16 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
    Bureaucrat b("Bureaucrat2", 149);
    // Bureaucrat b("Bureaucrat2", 110); // Another Test
    Form f("Form2", 120, 150);

    f.beSigned(b);
    b.signForm(f); // Should throw an exception because 149 > 120

    return (0);
}
