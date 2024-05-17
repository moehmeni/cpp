/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
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

class Form
{
private:
    const std::string name;
    bool is_signed;
    const int grade_sign;
    const int grade_exec;

public:
    Form();
    Form(std::string const _name, int const _grade_sign, int const _grade_exec);
    ~Form();
    Form(Form &copy);
    Form &operator=(Form const &b);
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeSign() const;
    int getGradeExec() const;
    void beSigned(const Bureaucrat &b);
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

std::ostream &operator<<(std::ostream &ost, Form const &obj);