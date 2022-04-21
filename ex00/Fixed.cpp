/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:46:32 by ytomiyos          #+#    #+#             */
/*   Updated: 2022/04/21 19:59:21 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Color.hpp"

Fixed::Fixed( void )
{
	std::cout << GREEN << "Default constructor called" << END << std::endl;
	setRawBits(0);
}

Fixed::Fixed( const Fixed &fixed )
{
	std::cout << GREEN << "Copy constructor called" << END << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << END << std::endl;
}

Fixed &Fixed::operator=( const Fixed &other )
{
	std::cout << "Copy assignation operator called" << std::endl;
	if (this != &other)
		_fixedPointValue = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void Fixed::setRawBits( int raw )
{
	_fixedPointValue = raw;
}
