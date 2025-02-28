#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _value;
	static const int _fract_bit = 8;

public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	bool operator==(const Fixed &rfixed) const;
	bool operator!=(const Fixed &rfixed) const;
	bool operator>(const Fixed &rfixed) const;
	bool operator>=(const Fixed &rfixed) const;
	bool operator<(const Fixed &rfixed) const;
	bool operator<=(const Fixed &rfixed) const;

	Fixed operator+(const Fixed rfix);
	Fixed operator*(const Fixed rfix);
	Fixed operator-(const Fixed rfix);
	Fixed operator/(const Fixed rfix);

	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed& min(Fixed& f1, Fixed& f2);
	static const Fixed& min(Fixed const& f1, Fixed const& f2);
	static Fixed& max(Fixed& f1, Fixed& f2);
	static const Fixed& max(Fixed const& f1, Fixed const& f2);

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
// std::ostream &operator<<(std::ostream &out, Fixed &fixed);