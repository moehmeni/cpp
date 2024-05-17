/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:15:43 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/04 17:59:45 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor" << std::endl;
}

Intern::Intern(const Intern &obj)
{
    std::cout << "Intern copy constructor" << std::endl;
    *this = obj;
}

Intern::~Intern()
{
    std::cout << "Intern destructor" << std::endl;
}

Intern &Intern::operator=(const Intern &b)
{
    std::cout << "Intern assignation operator" << std::endl;
    (void)b;
    return *this;
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm *forms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    for (int i = 0; i < 3; i++)
    {
        if (names[i] == formName)
        {
            // Free the other forms
            for (int j = 0; j < 3; j++)
                if (j != i)
                    delete forms[j];
            return forms[i];
        }
    }
    std::cout << "Form not found" << std::endl;
    return (NULL);
}
