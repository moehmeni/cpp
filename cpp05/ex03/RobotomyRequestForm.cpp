/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:36:43 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/04 14:38:40 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Default constructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const _target) : AForm("RobotomyRequestForm", 72, 45)
{
    target = _target;
    std::cout << "RobotomyRequestForm Constrcutor\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy)
{
    std::cout << "RobotomyRequestForm Copy constrcutor\n";
    *(this) = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &b)
{
    target = b.target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    checkIfCanExecute(executor);
    std::cout << "Brrrrrrrr" << std::endl;
    if (rand() % 2) // a random number between 0 and 1
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << target << " has failed to be robotomized" << std::endl;
}
