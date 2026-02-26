#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

    Bureaucrat boss("Boss", 1);

    ShrubberyCreationForm shrub("garden");
    RobotomyRequestForm rob("Bender");
    PresidentialPardonForm pardon("Arthur Dent");

    boss.signForm(shrub);
    boss.signForm(rob);
    boss.signForm(pardon);

    boss.executeForm(shrub);
    boss.executeForm(rob);
    boss.executeForm(pardon);

    return 0;
}