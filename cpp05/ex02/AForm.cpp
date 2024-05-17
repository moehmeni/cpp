/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:35:03 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/03 16:34:55 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AForm.hpp"

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Given grade is too high. It should be maiximum 1.";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Given grade is too low. It should be minimum 150.";
}

AForm::AForm() : name("default"), is_signed(false), grade_sign(1), grade_exec(1)
{
    std::cout << "AForm Default constructor\n";
}

AForm::AForm(std::string const _name, int const _grade_sign, int const _grade_exec) : name(_name), grade_sign(_grade_sign), grade_exec(_grade_exec)
{
    is_signed = false;
    if (_grade_sign < 1 || _grade_exec < 1)
        throw AForm::GradeTooHighException();
    if (_grade_sign > 150 || _grade_exec > 150)
        throw AForm::GradeTooLowException();
    std::cout << "AForm Constrcutor\n";
}

AForm::~AForm()
{
    std::cout << "AForm Destructor\n";
}

AForm::AForm(AForm &copy) : name(copy.getName()), grade_sign(copy.getGradeSign()), grade_exec(copy.getGradeExec())
{
    std::cout << "AForm Copy constrcutor\n";
    *(this) = copy;
}

AForm &AForm::operator=(AForm const &b)
{
    is_signed = b.getIsSigned();
    return (*this);
}

int AForm::getGradeSign() const
{
    return grade_sign;
}

int AForm::getGradeExec() const
{
    return grade_exec;
}

std::string AForm::getName() const
{
    return name;
}

bool AForm::getIsSigned() const
{
    return is_signed;
}

void AForm::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > grade_sign)
        throw AForm::GradeTooLowException();
    is_signed = true;
}

void AForm::checkIfCanExecute(const Bureaucrat &b) const
{
    if (!is_signed)
        std::runtime_error("Form is not signed");
    if (b.getGrade() > grade_exec)
        throw AForm::GradeTooLowException();
    if (b.getGrade() < grade_exec)
        throw AForm::GradeTooHighException();
}

std::ostream &operator<<(std::ostream &ost, AForm const &obj)
{
    ost << "AForm: " << obj.getName() << " is signed: " << obj.getIsSigned() << " Grade to sign: " << obj.getGradeSign() << " Grade to execute: " << obj.getGradeExec();
    return ost;
}
