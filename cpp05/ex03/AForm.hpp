/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:35:11 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/03 16:33:30 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "./Bureaucrat.hpp"

class AForm
{
private:
    const std::string name;
    bool is_signed;
    const int grade_sign;
    const int grade_exec;

public:
    AForm();
    AForm(std::string const _name, int const _grade_sign, int const _grade_exec);
    virtual ~AForm();
    AForm(AForm &copy);
    AForm &operator=(AForm const &b);
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeSign() const;
    int getGradeExec() const;
    void beSigned(const Bureaucrat &b);
    void checkIfCanExecute(const Bureaucrat &b) const;
    virtual void execute(Bureaucrat const &executor) const = 0;
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &ost, AForm const &obj);