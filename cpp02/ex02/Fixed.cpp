#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const int num)
{
	fixedPoint = num << fractionalBits;
}

Fixed::Fixed(const float num)
{
	fixedPoint = roundf(num * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	this->fixedPoint = other.fixedPoint;
	return *this;
}

bool Fixed::operator>(const Fixed &other) const
{
	return this->fixedPoint > other.fixedPoint;
}

bool Fixed::operator<(const Fixed &other) const
{
	return this->fixedPoint < other.fixedPoint;
}

bool Fixed::operator>=(const Fixed &other) const
{
	return this->fixedPoint >= other.fixedPoint;
}

bool Fixed::operator<=(const Fixed &other) const
{
	return this->fixedPoint <= other.fixedPoint;
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->fixedPoint == other.fixedPoint;
}

bool Fixed::operator!=(const Fixed &other) const
{
	return this->fixedPoint != other.fixedPoint;
}

Fixed	 Fixed::operator+(const Fixed &other) const
{
	Fixed res;
	res.fixedPoint = this->fixedPoint + other.fixedPoint;
	return res;
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed res;
	res.fixedPoint = this->fixedPoint - other.fixedPoint;
	return res;
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed res;
	res.fixedPoint = this->fixedPoint * other.fixedPoint;
	return res;
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed res;
	res.fixedPoint = this->fixedPoint / other.fixedPoint;
	return res;
}

Fixed	&Fixed::operator++(void)
{
	++fixedPoint;
	return *this;
}

Fixed	&Fixed::operator--(void)
{
	--fixedPoint;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fixedPoint++;
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->fixedPoint--;
	return tmp;
}

void	Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
}

int	Fixed::getRawBits() const
{
	return	fixedPoint;
}

int	Fixed::toInt() const
{
	return fixedPoint >> fractionalBits;
}

float	Fixed::toFloat() const
{
	return (float)fixedPoint / (1 << fractionalBits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fi)
{
	out << fi.toFloat();
	return out;
}
