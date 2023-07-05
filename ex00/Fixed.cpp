#include "Fixed.hpp"

Fixed (void) {
    std::cout << "Default constructor called" << std::endln;
    return;
}

Fixed (const Fixed &rhs) {
    std::cout << "Copy contructor called" << std::endln;
    return;
}

~Fixed(void) {
    return;
}

Fixed &operator = (const Fixed &rhs) {

}                              