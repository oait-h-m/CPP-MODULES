#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(const std::string& type)
{
    this->type = type;
}

Weapon::~Weapon()
{
}

void    Weapon::setType(const std::string& type)
{
    this->type = type;
}

const std::string&  Weapon::getType()
{
    return (type);
}
