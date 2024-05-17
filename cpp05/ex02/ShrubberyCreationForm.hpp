/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:22:12 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/04 14:36:09 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
    std::string target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const _target);
    ShrubberyCreationForm(ShrubberyCreationForm &copy);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &b);
    void execute(Bureaucrat const &executor) const;
};
