/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:46:28 by ytomiyos          #+#    #+#             */
/*   Updated: 2022/04/21 17:36:38 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
		int fixedPointValue;
		static const int fractionalBits = 8;
	public:
		Fixed( void );
		Fixed( const Fixed &fixed );
		~Fixed( void );
		Fixed& operator=( const Fixed &other );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif

