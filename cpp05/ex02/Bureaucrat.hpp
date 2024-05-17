/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:56:43 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/04 14:03:59 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AForm; // Forward declaration to avoid circular dependency

class Bureaucrat
{
private:
    std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(std::string const _name, int const _grade);
    Bureaucrat(Bureaucrat &copy);
    ~Bureaucrat();
    Bureaucrat &operator=(Bureaucrat const &b);
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(const AForm &f);
    void executeForm(const AForm &f);
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

std::ostream &operator<<(std::ostream &ost, Bureaucrat const &obj);