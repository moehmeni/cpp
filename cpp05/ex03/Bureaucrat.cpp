/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:56:58 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/04 14:43:39 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./AForm.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Given grade is too high. It should be maiximum 1.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Given grade is too low. It should be minimum 150.";
}

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor\n";
}

Bureaucrat::Bureaucrat(std::string const _name, int const _grade)
{
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    name = _name;
    grade = _grade;
    std::cout << "Constrcutor\n";
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor\n";
}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
    std::cout << "Copy constrcutor\n";
    *(this) = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &b)
{
    name = b.getName();
    grade = b.getGrade();
    return (*this);
}

int Bureaucrat::getGrade() const
{
    return grade;
}

std::string Bureaucrat::getName() const
{
    return name;
}

void Bureaucrat::incrementGrade()
{
    if (grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade()
{
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

void Bureaucrat::signForm(const AForm &f)
{
    if (f.getIsSigned())
        std::cout << name << " signed " << f.getName() << std::endl;
    else
        std::cout << name << " couldn't sign " << f.getName() << " because grade is too low" << std::endl;
}

void Bureaucrat::executeForm(const AForm &f)
{
    try
    {
        f.execute(*this);
        std::cout << name << " executed " << f.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << name << " couldn't execute " << f.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &ost, Bureaucrat const &obj)
{
    return (ost << obj.getName() << ", "
                << "bureaucrat grade " << obj.getGrade());
}
