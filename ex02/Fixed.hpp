#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed (void); 								//Default constructor
		Fixed (const int num);
		Fixed (const float num);
		Fixed (const Fixed &original); 				//Copy default constructor
		Fixed& operator = (const Fixed &original);	//Assignment operator constructor
		~Fixed (void);								//Deconstructor

		int getRawBits(void) const;
		void setRawBits(int const raw);

		////// COMPARISON OPERATORS //////
		bool operator> (const Fixed &obj) const;
		bool operator< (const Fixed &obj) const;
		bool operator>= (const Fixed &obj) const;
		bool operator<= (const Fixed &obj) const;
		bool operator== (const Fixed &obj) const;
		bool operator!= (const Fixed &obj) const;

		////// ARITHMETIC OPERATORS //////
		Fixed operator+ (const Fixed &obj) const;
		Fixed operator- (const Fixed &obj) const;
		Fixed operator* (const Fixed &obj) const;
		Fixed operator/ (const Fixed &obj) const;

		////// INCREMENT OPERATORS //////
		Fixed &operator++ ();
		Fixed operator++ (int);
		Fixed &operator--();
		Fixed operator--(int);

		////// MIN & MAX OPERATORS //////
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_fixedPoint;
		static const int	_fractionalBits = 8;
};

std::ostream& operator << (std::ostream &stream, const Fixed &obj);

#endif
