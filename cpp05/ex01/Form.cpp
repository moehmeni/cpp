/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:35:03 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/03 16:34:55 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

const char *Form::GradeTooHighException::what() const throw()
{
    return "Given grade is too high. It should be maiximum 1.";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Given grade is too low. It should be minimum 150.";
}

Form::Form() : name("default"), is_signed(false), grade_sign(1), grade_exec(1)
{
    std::cout << "Default constructor\n";
}

Form::Form(std::string const _name, int const _grade_sign, int const _grade_exec) : name(_name), grade_sign(_grade_sign), grade_exec(_grade_exec)
{
    is_signed = false;
    if (_grade_sign < 1 || _grade_exec < 1)
        throw Form::GradeTooHighException();
    if (_grade_sign > 150 || _grade_exec > 150)
        throw Form::GradeTooLowException();
    std::cout << "Constrcutor\n";
}

Form::~Form()
{
    std::cout << "Destructor\n";
}

Form::Form(Form &copy) : name(copy.getName()), grade_sign(copy.getGradeSign()), grade_exec(copy.getGradeExec())
{
    std::cout << "Copy constrcutor\n";
    *(this) = copy;
}

Form &Form::operator=(Form const &b)
{
    is_signed = b.getIsSigned();
    return (*this);
}

int Form::getGradeSign() const
{
    return grade_sign;
}

int Form::getGradeExec() const
{
    return grade_exec;
}

std::string Form::getName() const
{
    return name;
}

bool Form::getIsSigned() const
{
    return is_signed;
}

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > grade_sign)
        throw Form::GradeTooLowException();
    is_signed = true;
}

std::ostream &operator<<(std::ostream &ost, Form const &obj)
{
    ost << "Form: " << obj.getName() << " is signed: " << obj.getIsSigned() << " Grade to sign: " << obj.getGradeSign() << " Grade to execute: " << obj.getGradeExec();
    return ost;
}
