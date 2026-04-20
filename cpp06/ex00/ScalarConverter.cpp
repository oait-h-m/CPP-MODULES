#include "ScalarConverter.hpp"
#include <cstdlib>

static bool allDigits(const std::string &str);
static void    convertInteger(const std::string &literal);
static void    converChar(const char c);

void ScalarConverter::convert(const std::string &literal)
{
    if ((literal.size() == 1) && (!std::isdigit(literal[0])))
        converChar(literal[0]);
    else if (allDigits(literal))
        convertInteger(literal);
}

static bool allDigits(const std::string &str)
{
    for (std::size_t i = 0; i < str.size(); i++)
    {
        if (!std::isdigit((str[i])))
            return false;
    }
    return true;
}

static void    convertInteger(const std::string &literal)
{
    int base = 10;
    char *endp = 0;
    long num = std::strtol(literal.c_str(), &endp, base);

    if ((*endp != '\0' || errno == ERANGE) || (num < std::numeric_limits))
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: nanf\n";
        std::cout << "double: nan\n";
        return;
    }

    if ((num >= 0 && num <= 32) || num )

    std::cout << "char: ";
    std::cout <<  "int: " << num << std::endl;
}

static void    converChar(const char c)
{
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}