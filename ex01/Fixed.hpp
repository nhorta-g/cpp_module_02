#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed (void); 								//Default constructor
		Fixed (const int num);						//Int constructor
		Fixed (const float num);					//Float constructor
		Fixed (const Fixed &original); 				//Copy default constructor
		Fixed& operator = (const Fixed &original);	//Assignment operator constructor
		~Fixed (void);								//Deconstructor

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_fixedPoint;
		static const int	_fractionalBits = 8;
};

std::ostream& operator << (std::ostream &stream, const Fixed &obj);

#endif
