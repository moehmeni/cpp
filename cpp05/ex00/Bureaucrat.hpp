/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:56:43 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/03 16:06:16 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat
{
private:
    std::string name;
    int grade;

public:
    Bureaucrat();                                          // Default constructor
    Bureaucrat(std::string const _name, int const _grade); // Parametric constructor
    Bureaucrat(Bureaucrat &copy);                          // Copy constructor
    ~Bureaucrat();                                         // Destructor
    Bureaucrat &operator=(Bureaucrat const &b);
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
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