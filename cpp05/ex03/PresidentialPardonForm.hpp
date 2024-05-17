/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:29:16 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/04 13:31:04 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const _target);
    PresidentialPardonForm(PresidentialPardonForm &copy);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(PresidentialPardonForm const &b);
    void execute(Bureaucrat const &executor) const;
};
