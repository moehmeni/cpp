/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:12:33 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/04 17:57:51 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./AForm.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &obj);
        ~Intern();
        Intern &operator=(const Intern &b);
        AForm *makeForm(std::string formName, std::string target);
};
