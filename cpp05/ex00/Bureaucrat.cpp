#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &input, int grade) : name(input), grade(grade) 
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        grade = other.grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string    Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void    Bureaucrat::incrementGrade()
{
    if (grade <= 1)
        throw GradeTooHighException();
    --grade;
}

void    Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw GradeTooLowException();
    ++grade;
}

std::ostream &Bureaucrat::operator<<(std::ostream &out, Bureaucrat)

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}
