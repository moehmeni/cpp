/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:25:53 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/04 14:26:41 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Default constructor\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const _target) : AForm("ShrubberyCreationForm", 145, 137)
{
    target = _target;
    std::cout << "ShrubberyCreationForm Constrcutor\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy)
{
    std::cout << "ShrubberyCreationForm Copy constrcutor\n";
    *(this) = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &b)
{
    target = b.target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    checkIfCanExecute(executor);
    std::ofstream file(target + "_shrubbery");
    file << "      /\\      \n"
            "     /\\*\\     \n"
            "    /\\O\\*\\    \n"
            "   /*/\\/\\/\\   \n"
            "  /\\O\\/\\*\\/\\  \n"
            " /\\*\\/\\*\\/\\/\\ \n"
            "/\\O\\/\\/*/\\/O/\\\n"
            "      ||      \n"
            "      ||      \n"
            "      ||      \n";
    file.close();
}
