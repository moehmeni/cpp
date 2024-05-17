/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:33:30 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/04 15:10:32 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./AForm.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat b1("Bureaucrat1", 1);
    Bureaucrat b2("Bureaucrat2", 70);

    ShrubberyCreationForm s1("ShrubberyCreationForm1");
    RobotomyRequestForm r1("RobotomyRequestForm1");
    PresidentialPardonForm p1("PresidentialPardonForm1");

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;

    std::cout << s1 << std::endl;
    std::cout << r1 << std::endl;
    std::cout << p1 << std::endl;

    s1.beSigned(b1);
    r1.beSigned(b1);
    p1.beSigned(b1);

    b1.signForm(s1);
    b1.signForm(r1);
    b1.signForm(p1);

    b1.executeForm(s1);
    b1.executeForm(r1);
    b1.executeForm(p1);

    s1.beSigned(b2);
    r1.beSigned(b2);
    p1.beSigned(b2); // This will throw an exception since 70 > 25

    b2.signForm(s1);
    b2.signForm(r1);
    b2.signForm(p1);

    b2.executeForm(s1);
    b2.executeForm(r1);
    b2.executeForm(p1);

    return 0;
}
