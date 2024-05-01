/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:56:43 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/01 16:41:21 by mmomeni          ###   ########.fr       */
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
    Bureaucrat();
    Bureaucrat(Bureaucrat &copy);
    ~Bureaucrat();
    Bureaucrat &operator=(Bureaucrat &b);
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
};

class GradeTooHighException : public std::exception
{
public:
    char *what();
};

class GradeTooLowException : public std::exception
{
public:
    char *what();
};
