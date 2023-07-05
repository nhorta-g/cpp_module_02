#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed &original) {
    this->_fixed_number = original._fixed_number;
    std::cout << "Copy contructor called" << std::endl;
    return;
}

Fixed::~Fixed(void) {
        std::cout << "Destructor called" << std::endl;
    return;
}

Fixed& Fixed::operator = (const Fixed &original) {
    std::cout << "Copy assignment operator called" << std::endl;
    return;
}