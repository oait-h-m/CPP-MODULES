#ifndef FIXED_HPP
#define FIXED_HPP

class	Fixed
{
private:
	int	fixedPoint;
	static const int	fractionalBits;
public:
	Fixed();
	~Fixed();

	int getRawBits( void ) const;
	void	setRawBits(int const raw);
};

#endif
