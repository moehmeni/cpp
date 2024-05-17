/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:31:20 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/04 14:18:27 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Default constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const _target) : AForm("PresidentialPardonForm", 25, 5)
{
    target = _target;
    std::cout << "PresidentialPardonForm Constrcutor\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy)
{
    std::cout << "PresidentialPardonForm Copy constrcutor\n";
    *(this) = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &b)
{
    target = b.target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    checkIfCanExecute(executor);
    std::cout << target << " has been pardoned by Zafod Beeblebrox\n";
}
