#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_value = value << _fract_bit;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_value = round(value * (1 << _fract_bit));
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();

	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(_value) / (1 << _fract_bit);
}

int Fixed::toInt(void) const
{
	return _value >> _fract_bit;
}

std::ostream &operator<<(std::ostream &out,const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

bool Fixed::operator==(const Fixed &rfixed) const
{
    return this->_value == rfixed._value;
}

bool Fixed::operator!=(const Fixed &rfixed) const
{
    return this->_value != rfixed._value;
}

bool Fixed::operator>(const Fixed &rfixed) const
{
    return this->_value > rfixed._value;
}

bool Fixed::operator>=(const Fixed &rfixed) const
{
    return this->_value >= rfixed._value;
}

bool Fixed::operator<(const Fixed &rfixed) const
{
    return this->_value < rfixed._value;
}

bool Fixed::operator<=(const Fixed &rfixed) const
{
    return this->_value <= rfixed._value;
}

Fixed Fixed::operator+(const Fixed rfix)
{
	Fixed n_fix;
	n_fix._value = this->_value + rfix._value;
	return n_fix;
}

Fixed Fixed::operator*(const Fixed rfix)
{
	Fixed n_fix;
	n_fix._value = static_cast<float>(this->_value) * rfix._value / (1 << _fract_bit);
	return n_fix;
}

Fixed Fixed::operator-(const Fixed rfix)
{
	Fixed n_fix;
	n_fix._value = this->_value - rfix._value;
	return n_fix;
}

Fixed Fixed::operator/(const Fixed rfix)
{
	Fixed n_fix;
	n_fix._value = static_cast<float>(this->_value) / rfix._value * (1 << _fract_bit);
	return n_fix;
}

Fixed &Fixed::operator++()
{
	this->_value ++;
	return *this;
}

Fixed &Fixed::operator--()
{
	this->_value ++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old_fixed(*this);
	this->_value ++;
    return old_fixed;
}

Fixed Fixed::operator--(int)
{
	Fixed old_fixed(*this);
	this->_value --;
    return old_fixed;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 <= f2)
		return f1;
	else
		return f2;
}

const Fixed &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 <= f2)
		return f1;
	else
		return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 >= f2)
		return f1;
	else
		return f2;
}

const Fixed &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 >= f2)
		return f1;
	else
		return f2;
}
