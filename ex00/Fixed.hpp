#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	public:
		Fixed (void); 							//Default constructor
		Fixed (const Fixed &original); 				//Copy default constructor
		~Fixed (void); 							//Assignment operator constructor
		Fixed & operator = (const Fixed &original); //Deconstructor
	private:
		int					_fixed_number;
		static const int	bits = 8;
};

#endif
