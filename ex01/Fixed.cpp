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
#include <math.h>
#include "Fixed.hpp"
#include "Color.hpp"

Fixed::Fixed( void )
{
	std::cout << GREEN << "Default constructor called" << END << std::endl;
	setRawBits(0);
}

Fixed::Fixed( const Fixed &other )
{
	std::cout << GREEN << "Copy constructor called" << END << std::endl;
	*this = other;
}

Fixed::Fixed( const int value )
{
	std::cout << GREEN << "Int constructor called" << END << std::endl;
	setRawBits(value  * (1 << fractionalBits));
}

Fixed::Fixed( const float value )
{
	std::cout << GREEN << "Float constructor called" << END << std::endl;
	setRawBits((int)(roundf(value * (1 << fractionalBits))));
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << END << std::endl;
}

Fixed& Fixed::operator=( const Fixed &other )
{
	std::cout << "Copy assignation operator called" << std::endl;
	if (this != &other)
		setRawBits(other.getRawBits());
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (value);
}

void Fixed::setRawBits( int raw )
{
	value = raw;
}

int Fixed::toInt( void ) const
{
	int result;

	result = value / (1 << fractionalBits);
	return (result);
}

float Fixed::toFloat( void ) const
{
	float result;

	result = (float)value / (1 << fractionalBits);
	return (result);
}

std::ostream &operator<<( std::ostream &ostream, const Fixed &fixed )
{
	ostream << fixed.toFloat();
	return (ostream);
}

