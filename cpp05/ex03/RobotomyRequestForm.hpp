/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:34:56 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/04 14:36:36 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
private:
    std::string target;
    
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string const _target);
    RobotomyRequestForm(RobotomyRequestForm &copy);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(RobotomyRequestForm const &b);
    void execute(Bureaucrat const &executor) const;
};
