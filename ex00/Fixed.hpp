#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	public:
		Fixed (void);
		Fixed (const Fixed &rhs);
		~Fixed (void);
		Fixed & operator = (const Fixed &rhs);
	private:
		int					_fixed_number;
		static const int	bits = 8;
};

#endif
