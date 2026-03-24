/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 11:25:49 by strieste          #+#    #+#             */
/*   Updated: 2026/03/24 14:49:46 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main( void )
{
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}

template <typename T>
void swap(T x, T y)
{
	T	tmp = x;
	x = y;
	y = tmp;
	return ;
}

template <typename T>
T min(T x, T y)
{
	if (x < y)
		return (x);
	return (y);
}

template <typename T>
T max(T x, T y)
{
	if (x > y)
		return (x);
	return (y);
}
