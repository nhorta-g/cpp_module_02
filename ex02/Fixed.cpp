#include "Fixed.hpp"

////// CONSTRUCTORS //////
Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	_fixedPoint = 0;
	return;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = num << _fractionalBits;
	return;
}

Fixed::Fixed(const float num) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = roundf(num * (1 << _fractionalBits));
	return;
}

Fixed::Fixed(const Fixed &original) {
	std::cout << "Copy contructor called" << std::endl;
	_fixedPoint = original.getRawBits();
	return;
}

////// OPERATOR OVERLOAD //////
Fixed& Fixed::operator = (const Fixed &original) {
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPoint = original.getRawBits();
	return *this;
}

////// DESTRUCTORS //////
Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

////// GETTERS SETTERS AND MEMBER FUNCTIONS //////
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPoint = raw;
	return;
}

float Fixed::toFloat(void) const {
	return (float)_fixedPoint / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
	return (_fixedPoint >> _fractionalBits);
}

////// << OVERLOAD //////
std::ostream &operator<<(std::ostream &stream, const Fixed &obj) {
	stream << obj.toFloat();
	return stream;
}

////// COMPARISON OPERATORS //////
bool Fixed::operator> (const Fixed &obj) const {
	return _fixedPoint > obj.getRawBits();
}

bool Fixed::operator< (const Fixed &obj) const {
	return _fixedPoint < obj.getRawBits();
}

bool Fixed::operator>= (const Fixed &obj) const {
	return _fixedPoint >= obj.getRawBits();
}

bool Fixed::operator<= (const Fixed &obj) const {
	return _fixedPoint <= obj.getRawBits();
}

bool Fixed::operator== (const Fixed &obj) const {
	return _fixedPoint == obj.getRawBits();
}

bool Fixed::operator!= (const Fixed &obj) const {
	return _fixedPoint != obj.getRawBits();
}

////// ARITHMETIC OPERATORS //////
Fixed Fixed::operator+ (const Fixed &obj) const {
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator- (const Fixed &obj) const {
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator* (const Fixed &obj) const {
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/ (const Fixed &obj) const {
	return Fixed(this->toFloat() / obj.toFloat());
}

////// INCREMENT OPERATORS //////
Fixed &Fixed::operator++ () {
	_fixedPoint++;
	return *this;
}

Fixed Fixed::operator++ (int) {
	Fixed	stash(*this);
	_fixedPoint++;
	return stash;
}

Fixed &Fixed::operator--() {
	_fixedPoint--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed	stash(*this);
	_fixedPoint--;
	return stash;
}

////// MIN & MAX OPERATORS //////
Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (b < a ? b : a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return (b < a ? b : a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return (a < b ? b : a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return (a < b ? b : a);
}

