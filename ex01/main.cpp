/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:06:53 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/13 13:28:47 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include "Fixed.hpp"

void subject_test( void )
{
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
}

void set_int(int n)
{
	Fixed	obj(n);
	std::cout << "Set number[" << n << "]" << std::endl;
	std::cout << "default   = " << obj << std::endl;
	std::cout << "toInt()   = " << obj.toInt() << std::endl;
	std::cout << "toFloat() = " << obj.toFloat() << std::endl;
}

void set_float(float n)
{
	Fixed	obj(n);
	std::cout << "Set number[" << n << "]" << std::endl;
	std::cout << "default   = " << obj << std::endl;
	std::cout << "toInt()   = " << obj.toInt() << std::endl;
	std::cout << "toFloat() = " << obj.toFloat() << std::endl;
}

void my_test( void )
{
	// int
	set_int(0);
	set_int(1);
	set_int(-1);
	set_int(42);
	set_int(-42);
	set_int(100);
	set_int(4242);
	set_int(-4242);
	set_int(8388607);     //bit[00000000 01111111 11111111 11111111]
	set_int(-8388607);
	set_int(8388608);     // out of range
	set_int(2147483647);  // int max
	set_int(-2147483648); // int min
	// float
	set_float(0.0f);
	set_float(0.1f);
	set_float(4.2f);
	set_float(42.42f);
	set_float(-42.42f);
	set_float(0.111111111111111f);
	set_float(0.000000000000001f);
	set_float(0.5f);        // 10^-1
	set_float(-0.5f);
	set_float(0.25f);       // 10^-2
	set_float(-0.25f);
	set_float(0.125f);      // 10^-3
	set_float(-0.125f);
	set_float(0.0625f);     // 10^-4
	set_float(-0.0625f);
	set_float(0.03125f);    // 10^-5
	set_float(-0.03125f);
	set_float(0.015625f);   // 10^-6
	set_float(-0.015625f);
	set_float(0.0078125f);  // 10^-7
	set_float(-0.0078125f);
	set_float(0.0078125f);  // 10^-7
	set_float(-0.0078125f);
	set_float(0.00390625f); // 10^-8
	set_float(-0.00390625f);
	set_float(0.001953125f);// 10^-9
	set_float(-0.001953125f);
}

int main( void )
{
	subject_test();
//	my_test();
	return (0);
}

