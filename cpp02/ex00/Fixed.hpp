#pragma once

#include <iostream>

class Fixed
{
private:
	int _value;
	static const int _fract_bit = 8;

public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};