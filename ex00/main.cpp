/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:46:30 by ytomiyos          #+#    #+#             */
/*   Updated: 2022/04/21 20:05:06 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

void	subject_test()
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}

void	my_test1()
{
	Fixed a;
	Fixed b(a);
	Fixed c(b);
	Fixed d(c);

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << d.getRawBits() << std::endl;
}

void	my_test2()
{
	Fixed a;
	Fixed b;
	Fixed c;
	Fixed d;
	Fixed e;

	b = a;
	c = b;
	d = c;
	e = d;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << d.getRawBits() << std::endl;
	std::cout << e.getRawBits() << std::endl;
}

int main( void )
{
	subject_test();
//	my_test1();
//	my_test2();
	return (0);
}

