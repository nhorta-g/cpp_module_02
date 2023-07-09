#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	_fixedPoint = 0;
	return;
}

Fixed::Fixed(const Fixed &original) {
	std::cout << "Copy contructor called" << std::endl;
	_fixedPoint = original.getRawBits();
	return;
}

Fixed& Fixed::operator = (const Fixed &original) {
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPoint = original.getRawBits();
	return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPoint = raw;
	return;
}
