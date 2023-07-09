#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	public:
		Fixed (void); 								//Default constructor
		Fixed (const Fixed &original); 				//Copy default constructor
		Fixed& operator = (const Fixed &original);	//Assignment operator constructor
		~Fixed (void);								//Deconstructor
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int					_fixedPoint;
		static const int	_fractionalBits = 8;
};

#endif
